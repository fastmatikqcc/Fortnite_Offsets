namespace camera
{
	fvector location, rotation;
	Vector3 nigga_loc;
	float fov;
}

static auto UpdateCamera() -> void
{
	auto location_pointer = Kraft::read<uintptr_t>(pointer->uworld + 0x120);
	//printf("Location -> ", location_pointer);
	auto rotation_pointer = Kraft::read<uintptr_t>(pointer->uworld + 0x130);
	//printf("Rotation -> ", rotation_pointer);

	struct FNRotation
	{
		double a; //0x0000
		char pad_0008[24]; //0x0008
		double b; //0x0020
		char pad_0028[424]; //0x0028
		double c; //0x01D0
	}tpmrotation;

	tpmrotation.a = Kraft::read<double>(rotation_pointer);
	tpmrotation.b = Kraft::read<double>(rotation_pointer + 0x20);
	tpmrotation.c = Kraft::read<double>(rotation_pointer + 0x1d0);

	/*tpmrotation = read<FNRotation>(rotation_pointer);*/

	camera::rotation.x = asin(tpmrotation.c) * (180.0 / PI);
	camera::rotation.y = ((atan2(tpmrotation.a * -1, tpmrotation.b) * (180.0 / PI)) * -1) * -1;
	camera::location = Kraft::read<fvector>(location_pointer);
	camera::fov = Kraft::read<float>(pointer->player_controller + 0x3AC) * 90.f;

}

		static auto UpdateCamera() -> void
		{


			bool camera_debug = 0;
			auto location_pointer = read<uintptr_t>(arrays->uworld + 0x120);

			auto rotation_pointer = read<uintptr_t>(arrays->uworld + 0x130);

			struct FNRotation
			{
				double a; //0x0000
				char pad_0008[24]; //0x0008
				double b; //0x0020
				char pad_0028[424]; //0x0028
				double c; //0x01D0
			}tpmrotation;

			tpmrotation.a = read<double>(rotation_pointer);
			tpmrotation.b = read<double>(rotation_pointer + 0x20);
			tpmrotation.c = read<double>(rotation_pointer + 0x1d0);

			if (camera_debug)
			{
				std::printf(" [tpmrotation.c] -> %I64d\n", tpmrotation.c);
			}
			if (camera_debug)
			{
				std::printf(" [tpmrotation.b] -> %I64d\n", tpmrotation.b);
			}

			camera::rotation.x = asin(tpmrotation.c) * (180.0 / M_PI);
			camera::rotation.y = ((atan2(tpmrotation.a * -1, tpmrotation.b) * (180.0 / M_PI)) * -1) * -1;
			camera::rotation.z = 0;
			camera::location = read<fvector>(location_pointer);
			camera::fov = read<float>(arrays->local_player + 0x3AC) * 90.0f;

			if (camera_debug)
			{
				std::printf(" [camera::fov] -> %I64d\n", camera::fov);
			}
		}