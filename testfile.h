/**
*	@file testfile
*	@author Ethan Lefert
*	@date 10/29
*	@brief A tester file for Linked list
*/

#ifndef TEST_FILE_H
#define TEST_FILE_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
using namespace std;

class Tester
{
public:
void runTests()
{
  testIsEmpty();
  testSize();
  testSearch();
  testAddBack();
  testAddFront();
  testRemoveBack();
  testRemoveFront();
}

//tests the isEmpty function
void testIsEmpty()
{
  LinkedListOfInts testList;

  //test empty List
  if(testList.isEmpty())
  {
    cout << "Test Passed: Empty list returns true." << endl;
  }else
  {
    cout << "Test Failed: Empty list returns false." << endl;
  }

  testList.addFront(6);
  testList.addBack(4);
  if(testList.isEmpty() == false)
  {
    cout << "Test Passed: Non empty list returns false." << endl;
  }else
  {
    cout << "Test Failed: Non empty list returns true." << endl;
  }
}

//tests the size function
void testSize()
{
  LinkedListOfInts testList;
  if(testList.size() == 0)
  {
    cout << "Test Passed: Size of empty list returns 0." << endl;
  }else
  {
    cout << "Test Failed: Size of empty list does not return 0." << endl;
  }
  testList.addFront(6);
  testList.addBack(4);
  if(testList.size() == 2)
  {
    cout << "Test Passed: A not empty list returns the correct value." << endl;
  }else
  {
    cout << "Test Failed: A not empty list returns an incorrect value." << endl;
  }
}

//tests search function
void testSearch()
{
  LinkedListOfInts testList;
  if(testList.search(0) == false)
  {
    cout << "Test Passed: Found nothing in an empty list." << endl;
  }else
  {
    cout << "Test Failed: Found something in an empty list." << endl;
  }
  testList.addFront(6);
  testList.addBack(4);
  if(testList.search(4) == true)
  {
    cout << "Test Passed: Found the value in the list." << endl;
  }else
  {
    cout << "Test Failed: Did not find the value in the list." << endl;
  }
}

//tests add back function
void testAddBack()
{
  LinkedListOfInts testList;
  testList.addBack(5);
  if(testList.toVector().size() == 1)
  {
    cout << "Test Passed: Added a value to an empty list." << endl;
  }else
  {
    cout << "Test Failed: Did not add a value to an empty list." << endl;
  }
  testList.addBack(6);
  testList.addBack(7);
  testList.addBack(8);
  if(testList.toVector().back() == 8)
  {
    cout << "Test Passed: Added the right value to the back." << endl;
  }else
  {
    cout << "Test Failed: Did not add the right value to the back." << endl;
  }if(testList.toVector().front() == 8)
  {
    cout << "Test Failed: It was added to the front." << endl;
  }
}

//tests add front
void testAddFront()
{
  LinkedListOfInts testList;
  testList.addFront(5);
  if(testList.toVector().size() == 1)
  {
    cout << "Test Passed: Added a value to an empty list." << endl;
  }else
  {
    cout << "Test Failed: Did not add a value to an empty list." << endl;
  }

  testList.addFront(4);
  testList.addFront(3);
  testList.addFront(2);

  if(testList.toVector().front() == 2)
  {
    cout << "Test Passed: Added the right value to the front of the list." << endl;
  }else
  {
    cout << "Test Failed: Did not add the right value to the front of the list." << endl;
  }if(testList.toVector().back() == 8)
  {
    cout << "Test Failed: It was added to the back." << endl;
  }
}

//tests removeBack function
void testRemoveBack()
{
  LinkedListOfInts testList;
  if(testList.removeBack() == false)
  {
    cout << "Test Passed: Does not remove back from an empty list." << endl;
  }else
  {
    cout << "Test Failed: Removes the back from an empty list." << endl;
  }

  testList.addFront(4);
  testList.addFront(3);
  testList.addFront(2);

  testList.removeBack();

  if(testList.toVector().back() == 3)
  {
    cout << "Test Passed: Removes the back element of the list." << endl;
  }else
  {
    cout << "Test Failed: Does not remove the back element of the list." << endl;
  }
}

//tests the removeFront function
void testRemoveFront()
{
  LinkedListOfInts testList;
  if(testList.removeFront() == false)
  {
    cout << "Test Passed: Did not remove front of an empty list." << endl;
  }else
  {
    cout << "Test Failed: Removed the front of an empty list." << endl;
  }

  testList.addFront(4);
  testList.addFront(3);
  testList.addFront(2);

  testList.removeFront();
  if(testList.toVector().front() == 3)
  {
    cout << "Test Passed: Removed the front element from a list." << endl;
  }else
  {
    cout << "Test Failed: Did not remove the front element from a list." << endl;
  }
}
};

#endif
