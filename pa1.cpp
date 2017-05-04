//
//  pal.cpp
//  Programming Assignment 1
//
//  Created by Daniel Ruales on 2/12/17.
//  Copyright © 2017 Daniel Ruales. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

// Creates Magic Square
void formMagicSquare(int N)
{
    // Declares matrix magicSquare
    int magicSquare[N][N];
    int i=0,j=N/2,num;
    // sets matrix slots as 0
    for (int i=0; i< N; i++)
    {
        for (int j=0; j<N; j++)
        {
            magicSquare[i][j]=0;
        }
    }
    // Conditions determine numbers placement in matrix
    for(num=1;num<=N*N;num++)
    {
        magicSquare[i--][j++]=num;
        
        if(i==-1&&j==N) {
            i=i+2;
            j=j-1;
        }
        
        else if(i==-1)
            i=N-1;
        
        else if(j==N)
            j=0;
        
        else if(magicSquare[i][j]!=0) {
            i=i+2;
            j=j-1;
        }
    }
    
    // Prints Magic Squares
    printf("Magic Square #1 is\n");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%2d ",magicSquare[i][j]);
        printf("\n");
    }
    //Summations for Magic Square #1
    //Row Summations
    int  sumr =0;
    
    
    std::cout << ("Checking the sums of every row:");
    for (int i =0; i<N; ++i)
    {
        for (int j=0; j<N; ++j)
        {
            sumr +=magicSquare[i][j];
        }
        printf(" %d ", (sumr));
        sumr = 0;
        
    }
    
    std::cout << ("\n");
    //Column Summations
    std::cout << ("Checking the sums of every column:");
    int  sumc =0;
    
    for (i =0; i<N; ++i)
    {
        for (j=0; j<N; ++j)
        {
            sumc +=magicSquare[i][j];
        }
        printf(" %d", (sumc));
        sumc = 0;
    }
    std::cout << ("\n");
    //Diagonal Summations
    std::cout << ("Checking the sums of every diagonal: ");
    int sumd1 = 0;
    
    for (i =0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd1 += magicSquare[i][j];
            }
        }
        
    }
    int sumd2 = 0;
    
    for (i = N; i>=0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd2 += magicSquare[i][j];
            }
        }
        
    }
    printf("%d ", sumd1);
    printf("%d ", sumd2);
    
    std::cout << ("\n");
    
    printf("Magic Square #2 is\n");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%2d ",magicSquare[j][i]);
        printf("\n");
    }
    //Summations for Magic Square #2
    //Row Summations
    sumr =0;
    
    
    std::cout << ("Checking the sums of every row:");
    for (int i =0; i<N; ++i)
    {
        for (int j=0; j<N; ++j)
        {
            sumr +=magicSquare[i][j];
        }
        printf(" %d ", (sumr));
        sumr = 0;
        
    }
    
    std::cout << ("\n");
    //Column Summations
    std::cout << ("Checking the sums of every column:");
    sumc =0;
    
    for (i =0; i<N; ++i)
    {
        for (j=0; j<N; ++j)
        {
            sumc +=magicSquare[i][j];
        }
        printf(" %d", (sumc));
        sumc = 0;
    }
    std::cout << ("\n");
    //Diagonal Summations
    std::cout << ("Checking the sums of every diagonal: ");
    sumd1 = 0;
    
    for (i =0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd1 += magicSquare[i][j];
            }
        }
        
    }
    sumd2 = 0;
    
    for (i = N; i>=0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd2 += magicSquare[i][j];
            }
        }
        
    }
    printf("%d ", sumd1);
    printf("%d ", sumd2);
    
    std::cout << ("\n");
    
    printf("Magic Square #3 is\n");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%2d ",magicSquare[N-1-i][N-1-j]);
        printf("\n");
    }
    //Summations for Magic Square #3
    //Row Summations
    sumr =0;
    
    
    std::cout << ("Checking the sums of every row:");
    for (int i =0; i<N; ++i)
    {
        for (int j=0; j<N; ++j)
        {
            sumr +=magicSquare[i][j];
        }
        printf(" %d ", (sumr));
        sumr = 0;
        
    }
    
    std::cout << ("\n");
    //Column Summations
    std::cout << ("Checking the sums of every column:");
    sumc =0;
    
    for (i =0; i<N; ++i)
    {
        for (j=0; j<N; ++j)
        {
            sumc +=magicSquare[i][j];
        }
        printf(" %d", (sumc));
        sumc = 0;
    }
    std::cout << ("\n");
    //Diagonal Summations
    std::cout << ("Checking the sums of every diagonal: ");
    sumd1 = 0;
    
    for (i =0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd1 += magicSquare[i][j];
            }
        }
        
    }
    sumd2 = 0;
    
    for (i = N; i>=0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd2 += magicSquare[i][j];
            }
        }
        
    }
    printf("%d ", sumd1);
    printf("%d ", sumd2);
    
    std::cout << ("\n");
    
    printf("Magic Square #4 is\n");
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%2d ",magicSquare[N-1-j][N-1-i]);
        printf("\n");
    }
    //Summations for Magic Square #4
    //Row Summations
    sumr =0;
    
    
    std::cout << ("Checking the sums of every row:");
    for (int i =0; i<N; ++i)
    {
        for (int j=0; j<N; ++j)
        {
            sumr +=magicSquare[i][j];
        }
        printf(" %d ", (sumr));
        sumr = 0;
        
    }
    
    std::cout << ("\n");
    //Column Summations
    std::cout << ("Checking the sums of every column:");
    sumc =0;
    
    for (i =0; i<N; ++i)
    {
        for (j=0; j<N; ++j)
        {
            sumc +=magicSquare[i][j];
        }
        printf(" %d", (sumc));
        sumc = 0;
    }
    std::cout << ("\n");
    //Diagonal Summations
    std::cout << ("Checking the sums of every diagonal: ");
    sumd1 = 0;
    
    for (i =0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd1 += magicSquare[i][j];
            }
        }
        
    }
    sumd2 = 0;
    
    for (i = N; i>=0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumd2 += magicSquare[i][j];
            }
        }
        
    }
    printf("%d ", sumd1);
    printf("%d ", sumd2);
    
    std::cout << ("\n");
}


// Main
int main()
{
    int N;
    printf("Enter the size of a magic square: ");
    std :: cin >> N;
    //Only proceeds if user input is in the desired range
    if (N<= 15 && N>= 3 && N % 2 != 0){
        formMagicSquare(N);
    }
    else {
        printf("Sorry, next time pick an odd number between 3 and 15, inclusive. \n");
    }
}
