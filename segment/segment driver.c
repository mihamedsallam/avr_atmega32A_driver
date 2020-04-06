set_segment(u8 mode,u8 port,u8 nibl_h_l){
	
	if (mode==four_bit)
	{
gpio_set_dir_heighorlow_nibble(port,nibl_h_l,output)
	}
	else if (mode==eight_bit)
	{
gpio_set_port(port,output);
	
	}
	}
	}
write_segment(u8 mode,u8 port,u8 nibl_h_l,u8 value){
	
	if (mode==eight_bit)
	{
		u8 arr[10]={0x74,0x30,0x6d,0x79,0x33,0x5d,0x5f,0x70,0x7f,0x7b,0x77,0x1f,0x4e,0x3d,0x4f,0x47};
		gpio_write_port(port,arr[value]);
	}
	else if (mode==four_bit)
	{gpio_write_nible(port,nibl_h_l,value);
	}
}
	
	
	
	
	
	
	
	
	
	
