ccflags-y += -Idrivers/media/platform/msm/camera_v2/
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor
ifeq ($(CONFIG_CAF_CAMERA_DRIVER),y)
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor_caf/cci
else
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor/cci
endif
obj-$(CONFIG_MSMB_CAMERA)   += msm_camera_io_util.o msm_camera_cci_i2c.o msm_camera_qup_i2c.o msm_camera_i2c_mux.o msm_camera_spi.o
ifneq ($(CONFIG_CAF_CAMERA_DRIVER),y)
obj-$(CONFIG_MSMB_CAMERA)   += msm_camera_dt_util.o
endif
