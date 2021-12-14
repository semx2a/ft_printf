/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:44:12 by seozcan           #+#    #+#             */
/*   Updated: 2021/12/13 19:12:13 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	void	*ptr;
	char	c;
	char	*str;

	c = 'p';
	str = "string";
	ptr = &str;
	//	-----------------------------------C-------------------------------------
	//		ft_printf("%c", c);
	//	ft_putchar('\n');*/
	//	-----------------------------------S-------------------------------------
	//		ft_printf("%s", str);
	//	ft_putchar('\n');
	//	ft_printf("%s", NULL);	
	//	ft_putchar('\n');
	//	printf("%s", NULL);	
	//	ft_putchar('\n');
	//	ft_printf(" NULL %s NULL ", NULL);
	//	ft_putchar('\n');
	//	printf(" NULL %s NULL ", NULL);
	//	ft_putchar('\n');
	//	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	//	ft_putchar('\n');
	//	printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	//	ft_putchar('\n');*/
	//-----------------------------------P-------------------------------------
	//	----FT_PRITNTF----
	ft_printf("[0]: %p", ptr);
	ft_putchar('\n');
	ft_printf("[1]: %p ", -1);
	ft_putchar('\n');
	ft_printf("[2]: %p ", 1);
	ft_putchar('\n');
	ft_printf("[3]: %p ", 15);
	ft_putchar('\n');
	ft_printf("[4]: %p ", 16);
	ft_putchar('\n');
	ft_printf("[5]: %p ", 17);
	ft_putchar('\n');
	ft_printf("[6]: %p %p ", -9223372036854775808, 9223372036854775807);
	ft_putchar('\n');
	ft_printf("[7]: %p %p ", -2147483648, 2147483647);
	ft_putchar('\n');
	ft_printf("[8]: %p %p ", -1, 1);
	ft_putchar('\n');
	ft_printf("[9]: %p %p ", 0, 0);
	ft_putchar('\n');
	//	------PRINTF------
	printf("[0]: %p\n", ptr);
	printf("[1]: %p\n ", -1);
	printf("[2]: %p\n ", 1);
	printf("[3]: %p\n ", 15);
	printf("[4]: %p\n ", 16);
	printf("[5]: %p\n ", 17);
	printf("[6]: %p %p\n ", -9223372036854775808, 922337203685477580);
	printf("[7]: %p %p\n ", -2147483648, 2147483647);
	printf("[8]: %p %p\n ", -1, 1);
	printf("[9]: %p %p\n ", 0, 0);
	//	-----------------------------------D-------------------------------------
	//	ft_printf("%d", 0);
	//	ft_putchar('\n');
	//	ft_printf("%d", -1);
	//	ft_putchar('\n');
	//	ft_printf("%d", 1);
	//	ft_putchar('\n');
	//	ft_printf("%d", 9);
	//	ft_putchar('\n');
	//	ft_printf("%d", 10);
	//	ft_putchar('\n');
	//	ft_printf("%d", 11);
	//	ft_putchar('\n');
	//	ft_printf("%d", 15);
	//	ft_putchar('\n');
	//	ft_printf("%d", 16);
	//	ft_putchar('\n');
	//	ft_printf("%d", 17);
	//	ft_putchar('\n');
	//	ft_printf("%d", 99);
	//	ft_putchar('\n');
	//	ft_printf("%d", 100);
	//	ft_putchar('\n');
	//	ft_printf("%d", 101);
	//	ft_putchar('\n');
	//	ft_printf("%d", -9);
	//	ft_putchar('\n');
	//	ft_printf("%d", -10);
	//	ft_putchar('\n');
	//	ft_printf("%d", -11);
	//	ft_putchar('\n');
	//	ft_printf("%d", -15);
	//	ft_putchar('\n');
	//	ft_printf("%d", -16);
	//	ft_putchar('\n');
	//	ft_printf("%d", -17);
	//	ft_putchar('\n');
	//	ft_printf("%d", -99);
	//	ft_putchar('\n');
	//	ft_printf("%d", -100);
	//	ft_putchar('\n');
	//	ft_printf("%d", -101);
	//	ft_putchar('\n');
	//	ft_printf("%d", -2147483648);
	//	ft_putchar('\n');
	//	-----------------------------------I-------------------------------------
	//	ft_printf("%i", -11);		
	//	ft_putchar('\n');
	//	ft_printf("%i", -1111111);		
	//	ft_putchar('\n');
	//	-----------------------------------U-------------------------------------
	//	ft_printf("%u", 0);
	//	ft_putchar('\n');
	//	ft_printf("%u", -1);
	//	ft_putchar('\n');
	//	ft_printf("%u", 1);
	//	ft_putchar('\n');
	//	ft_printf("%u", 9);
	//	ft_putchar('\n');
	//	ft_printf("%u", 10);
	//	ft_putchar('\n');
	//	ft_printf("%u", 11);
	//	ft_putchar('\n');
	//	ft_printf("%u", 15);
	//	ft_putchar('\n');
	//	ft_printf("%u", 16);
	//	ft_putchar('\n');
	//	ft_printf("%u", 17);
	//	ft_putchar('\n');
	//	ft_printf("%u", 99);
	//	ft_putchar('\n');
	//	ft_printf("%u", 100);
	//	ft_putchar('\n');
	//	ft_printf("%u", 101);
	//	ft_putchar('\n');
	//	ft_printf("%u", -9);
	//	ft_putchar('\n');
	//	ft_printf("%u", -10);
	//	ft_putchar('\n');
	//	ft_printf("%u", -11);
	//	ft_putchar('\n');
	//	ft_printf("%u", -15);
	//	ft_putchar('\n');
	//	ft_printf("%u", -16);
	//	ft_putchar('\n');
	//	ft_printf("%u", -17);
	//	ft_putchar('\n');
	//	ft_printf("%u", -99);
	//	ft_putchar('\n');
	//	ft_printf("%u", -100);
	//	ft_putchar('\n');
	//	ft_printf("%u", -101);
	//	ft_putchar('\n');
	//	ft_printf("%u", -2147483648);
	//	ft_putchar('\n');
	//	ft_printf("%u", 2147483647);
	//	ft_putchar('\n');
	//	ft_printf("%u", 4294967295);
	//	ft_putchar('\n');
	//	ft_printf("%u", 9223372036854775807);
	//	ft_putchar('\n');
	//	ft_printf("%u", -9223372036854775807);
	//	ft_putchar('\n');
	//	ft_printf("%u", 18446744073709551615);
	//	-----------------------------------x-------------------------------------
	//	ft_printf("%x", 42);		
	//	ft_putchar('\n');
	//	-----------------------------------X-------------------------------------
	//	ft_printf("%X", 42);		
	//	ft_putchar('\n');
	//	-----------------------------------%-------------------------------------
	//	ft_printf("%");	
	//	ft_putchar('\n');
	//	----------------------------------MIX------------------------------------
	//	ft_printf("%c%s%p%d%i%%%X%", c, str, ptr, 10, -11, 458, 42, 42);	
	//	ft_putchar('\n');
	//	--------------------------------NO-ARGS----------------------------------
	//	ft_printf("semiha");	
	//	ft_putchar('\n');
	//	ft_printf("%+-12.10d");
	//	ft_putchar('\n');
	return (0);
}
