unsigned char   reverse_bits(unsigned char octet)
{
	unsigned char	out;

	out = 0;
	out = out | ((octet & 128) >> 7);
        out = out | ((octet & 64) >> 5);
        out = out | ((octet & 32) >> 3);
        out = out | ((octet & 16) >> 1);
        out = out | ((octet & 8) << 1);
        out = out | ((octet & 4) << 3);
        out = out | ((octet & 2) << 5);
        out = out | ((octet & 1) << 7);
        return (out);
}

/*unsigned char   reverse_bits(unsigned char octet)
{
        int             i;
        int             n;
        char    s[8];

        i = 0;
        n = (int)octet;
        while (n)
        {
                s[i] = num % 2 + '0';
                num /= 2;
                i++;
        }
        while (i < 8)
        {
                s[i] = '0';
                i++;
        }
        i = 0;
        while (i < 8)
        {
                write(1, &str[i], 1);
                i++;
        }
}

unsigned char   reverse_bits_magic(unsigned char octet)
{
        return ((octet * 0x0202020202ULL & 0x010884422010ULL) % 0x3ff);
}*/
