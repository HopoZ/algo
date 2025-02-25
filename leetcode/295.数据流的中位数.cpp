/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-09-04 21:06:48
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-09-12 20:39:47
 * @FilePath: \code-practice\leetcode\295.数据流的中位数.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */

/*
 * @lc app=leetcode.cn id=295 lang=cpp
 *
 * [295] 数据流的中位数
 */

// 要构建一个堆，不用priority_queue
#include <queue>
#include <stdexcept>
#include <utility>
#include <vector>
using namespace std;
class maxHeap {
  vector<int> heap; // 完全二叉树
  int parent(int i) { return (i - 1) / 2; }
  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }
  void heapifyUp(int i) {
    if (i && heap[parent(i)] < heap[i]) {
      swap(heap[parent(i)], heap[i]);
      heapifyUp(parent(i));
    }
  }
  void heapifyDown(int i) {
    int largest = i;
    if (left(i) < heap.size() && heap[left(i)] > heap[largest]) {
      largest = left(i);
    }
    if (right(i) < heap.size() && heap[right(i)] > heap[largest]) {
      largest = right(i);
    }
    if (largest != i) {
      swap(heap[largest], heap[i]);
      heapifyDown(largest);
    }
  }

public:
  int size() { return heap.size(); }
  bool empty() { return heap.size() == 0; }
  void push(int e) {
    heap.push_back(e);
    heapifyUp(heap.size() - 1);
  }
  void pop() {
    if (heap.size() == 0) {
      throw out_of_range("heap is empty");
    }

    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
  }
  int top() {
    if (heap.size() == 0) {
      throw out_of_range("heap is empty");
    }

    return heap[0];
  }
};
class minHeap {
  vector<int> heap; // 完全二叉树
  int parent(int i) { return (i - 1) / 2; }
  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }
  void heapifyUp(int i) {
    if (i && heap[parent(i)] > heap[i]) {
      swap(heap[parent(i)], heap[i]);
      heapifyUp(parent(i));
    }
  }
  void heapifyDown(int i) {
    int smallest = i;
    if (left(i) < heap.size() && heap[left(i)] < heap[smallest]) {
      smallest = left(i);
    }
    if (right(i) < heap.size() && heap[right(i)] < heap[smallest]) {
      smallest = right(i);
    }
    if (smallest != i) {
      swap(heap[smallest], heap[i]);
      heapifyDown(smallest);
    }
  }

public:
  int size() { return heap.size(); }
  bool empty() { return heap.size() == 0; }
  void push(int e) {
    heap.push_back(e);
    heapifyUp(heap.size() - 1);
  }
  void pop() {
    if (heap.size() == 0) {
      throw out_of_range("heap is empty");
    }

    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
  }
  int top() {
    if (heap.size() == 0) {
      throw out_of_range("heap is empty");
    }

    return heap[0];
  }
};

class MedianFinder {
  maxHeap queMin;
  minHeap queMax;

public:
  MedianFinder() {}

  void addNum(int num) {
    if (queMin.empty() || num <= queMin.top()) {
      queMin.push(num);
      if (queMax.size() + 1 < queMin.size()) {
        queMax.push(queMin.top());
        queMin.pop();
      }
    } else {
      queMax.push(num);
      if (queMax.size() > queMin.size()) {
        queMin.push(queMax.top());
        queMax.pop();
      }
    }
  }

  double findMedian() {
    if (queMin.size() == queMax.size() + 1) {
      return queMin.top();
    }

    return (queMax.top() + queMin.top()) / 2.0;
  }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
