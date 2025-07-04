/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamei <kkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:51:06 by kkamei            #+#    #+#             */
/*   Updated: 2025/05/29 11:52:38 by kkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	put_test_name(char *s)
{
	printf("%s ----------\n", s);
}

void	put_ng(void)
{
	printf("NG🔥\n");
}

void	put_ok(void)
{
	printf("OK💎\n");
}
