#pragma once

int PrintMenu();
int PrintArray(int* a, int l);
int ExpandArray(int*& a, int& l, int n);
int AddElement(int*& a, int& l, int el);
int DeleteElement(int*& a, int& l, int in);
int SortArray(int* a, int l);
int ReverseArray(int* a, int l);
int IndexLastMinElement(int* a, int l);
int IndexFirstMaxElement(int* a, int l);
int ChangeMinMaxElements(int* a, int l);
int DeleteDuplicateElements(int*& a, int& l);
int AddRandomElements(int*& a, int& l, int n);