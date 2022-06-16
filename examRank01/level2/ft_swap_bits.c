unsigned char   swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char new_left_4_bits;
	unsigned char new_right_4_bits;

	new_left_4_bits = octet >> 4;
	new_right_4_bits = octet << 4;
	result = new_left_4_bits | new_right_4_bits;
	return (result);
}
