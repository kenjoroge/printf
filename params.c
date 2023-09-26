#include "main.h"

/**
 * init_params - resets buf and clears struct fields)
 * @params: parametrs
 * @ap: pointer for the argument
 * Return: Always zero
 *
 */

void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_flag = 0;
	params->#tag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->precision = UINT_MAX;

	params->h_modifer = 0;
	params->l_modifier = 0;
	void(ap);
}
