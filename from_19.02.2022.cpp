#include <iostream>

using namespace std;
void Task_1() {
    cout << "ЗАДАЧА № 1: \n\n";
    int M, N;
    cout << "Введите размер массива А: ";
    cin >> M;
    int* A = new int[M];
    cout << "Массив А: ";
    for (int i = 0; i < M; i++) {
        A[i] = rand() % 30 + 1;
        cout << A[i] << " ";
    }
    cout << endl << endl;
    cout << "Введите размер массива В: ";
    cin >> N;
    int* B = new int[N];
    cout << "Массив В: ";
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 30 + 1;
        cout << B[i] << " ";
    }
    cout << "\n\n";
    int L = M + N;
    int* C = new int[L];
    for (int i = 0; i < M; i++)
        C[i] = A[i];
    for (int i = 0; i < N; i++)
        C[M + i] = B[i];
    cout << "\n\nЭлементы массива A, которые не включаются в массив B, без повторений: ";
    int count = 0;
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {           
                if (A[i] == B[j]) {
                    count = 1;
                }
         }
        if (count == 1) {

        }
        else {
            cout << C[i] << " ";
        }
        count = 0;
    }
   
    cout << endl << endl;
    delete[] A;
    delete[] B;
    delete[] C;
}
void Task_2() {
    cout << "ЗАДАЧА № 2: \n\n";
    int M, N;
    cout << "Введите размер массива А: ";
    cin >> M;
    int* A = new int[M];
    cout << "Массив А: ";
    for (int i = 0; i < M; i++) {
        A[i] = rand() % 30 + 1;
        cout << A[i] << " ";
    }
    cout << endl << endl;
    cout << "Введите размер массива В: ";
    cin >> N;
    int* B = new int[N];
    cout << "Массив В: ";
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 30 + 1;
        cout << B[i] << " ";
    }
    cout << "\n\n";
    int L = M + N;
    int* C = new int[L];
    for (int i = 0; i < M; i++)
        C[i] = A[i];
    for (int i = 0; i < N; i++)
        C[M + i] = B[i];

    cout << "\n\nЭлементы массивов A и B, которые не являются общими для них, без повторений: ";

    int count = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            if (i != j) {
                if (C[i] == C[j]) {

                    count = 1;
                }
            }
        }
        if (count == 1) {

        }
        else {
            cout << C[i] << " ";
        }
        count = 0;
    }
    delete[] A;
    delete[] B;
    delete[] C;
    cout << endl << endl;
}
void Task_3() {
    cout << "ЗАДАЧА № 3: \n\n";
    int M, N;
    cout << "Введите размер массива А: ";
    cin >> M;
    int* A = new int[M];
    cout << "Массив А: ";
    for (int i = 0; i < M; i++) {
        A[i] = rand() % 30 + 1;
        cout << A[i] << " ";
    }
    cout << endl << endl;
    cout << "Введите размер массива В: ";
    cin >> N;
    int* B = new int[N];
    cout << "Массив В: ";
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 30 + 1;
        cout << B[i] << " ";
    }
    cout << "\n\n";
    int L = M + N;
    int* C = new int[L];
    for (int i = 0; i < M; i++)
        C[i] = A[i];
    for (int i = 0; i < N; i++)
        C[M + i] = B[i];
    cout << "Элементы обоих массивов, в котором возможны повторения: ";
    for (int i = 0; i < L; i++) {
        cout << C[i] << " ";
    }
    cout << "\n\n";
    int j;
    cout << "Массив минимально возможного размера без повторений : ";
    for (int i = 0; i < L; i++) {
        for (j = 0; j < i; j++)
            if (C[i] == C[j]) break;
        if (i == j)
            cout << C[i] << " ";
    }
    delete[] A;
    delete[] B;
    delete[] C;
}
void Task_4() {
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    int* A = new int[M];
    cout << "Инициализируйте массив своими значениями,";
    cout << "\nкол - во значений должно равняться размеру массива : ";
    int i;
    for (int i = 0; i < M; i++)
        cin >> A[i];
    cout << "Нажмите 1 и программа уберёт нечётные числа из массива.\n";
    cout << "Нажмите 2 и программа уберёт чётные числа из массива.\n";
    cout << "Ваш выбор: ";
    cin >> N;
    for (int i = 0; i < M; i++)
        if ((N == 1 && A[i] % 2 == 0)||(N == 2 && A[i] % 2 != 0))
            cout << A[i] << " ";
}
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //Task_1();
    //Task_2(); 
    //Task_3();
    Task_4();
}