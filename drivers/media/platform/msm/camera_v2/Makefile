ccflags-y += -Idrivers/media/platform/msm/camera_v2
ifeq ($(CONFIG_CAF_CAMERA_DRIVER),y)
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor_caf
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor/io
else
ccflags-y += -Idrivers/media/platform/msm/camera_v2/sensor
endif
ccflags-y += -Idrivers/media/platform/msm/camera_v2/codecs
ccflags-y += -Idrivers/media/platform/msm/camera_v2/isp
ccflags-y += -Idrivers/media/platform/msm/camera_v2/pproc
ccflags-y += -Idrivers/media/platform/msm/camera_v2/msm_vb2
ccflags-y += -Idrivers/media/platform/msm/camera_v2/camera
ccflags-y += -Idrivers/media/platform/msm/camera_v2/jpeg_10

obj-$(CONFIG_MSMB_CAMERA) += msm.o
obj-$(CONFIG_MSMB_CAMERA) += camera/
obj-$(CONFIG_MSMB_CAMERA) += msm_vb2/
ifeq ($(CONFIG_CAF_CAMERA_DRIVER),y)
obj-$(CONFIG_MSMB_CAMERA) += sensor_caf/
obj-$(CONFIG_MSMB_CAMERA) += sensor/io/
else
obj-$(CONFIG_MSMB_CAMERA) += sensor/
endif
obj-$(CONFIG_MSMB_CAMERA) += isp/
obj-$(CONFIG_MSMB_CAMERA) += ispif/
obj-$(CONFIG_MSMB_JPEG) += jpeg_10/
obj-$(CONFIG_MSMB_CAMERA) += msm_buf_mgr/
obj-$(CONFIG_MSMB_CAMERA) += pproc/
