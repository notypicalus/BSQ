/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:26:31 by soochoi           #+#    #+#             */
/*   Updated: 2019/07/30 18:26:56 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void        bsq(int map[i][j], int max_i[max_size], int max_j[max_size])
 16 {
 17     int max_size = 5;
 18     int map[5][5] = {
 19         {0, 1, 1, 1},
 20         {1, 0, 1, 1},
 21         {1, 1, 1, 1},
 22         {1, 1, 1, 1},
 23         {1, 1, 1, 1}};
 24
 25         int max_col;
 26         int max_row;
 27         int max_i_check = 0;
 28         int i_total = 0;
 29
 30         while (i < max_size)
 31         {
 32             int i = 0;
 33             max_col = 0;
 34             while (j < max_size)
 35             {
 36                 int j = 0;
 37                 j++;
 38             }
 39             if (map[i][j] == 1 && (map[i][j-1] == 1 || map[i][j+1] == 1))
 40             {
 41                 max_col += 1;
 42             }
 43             i++;
 44             if (max_i_check < max_col)
 45             {
 46                 max_i_check = max_col;
 47             }
 48             max_i[i] = max_col;
 49         }
 50 }
