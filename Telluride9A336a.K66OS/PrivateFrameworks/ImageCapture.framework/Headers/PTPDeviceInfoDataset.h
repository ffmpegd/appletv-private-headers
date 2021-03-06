/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSMutableArray;

@interface PTPDeviceInfoDataset : NSObject {
	NSMutableData *_content;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	unsigned short _standardVersion;	// 10 = 0xa
	unsigned _vendorExtensionID;	// 12 = 0xc
	unsigned short _vendorExtensionVersion;	// 16 = 0x10
	NSString *_vendorExtensionDescription;	// 20 = 0x14
	unsigned short _functionalMode;	// 24 = 0x18
	NSMutableArray *_operationsSupported;	// 28 = 0x1c
	NSMutableArray *_eventsSupported;	// 32 = 0x20
	NSMutableArray *_devicePropertiesSupported;	// 36 = 0x24
	NSMutableArray *_captureFormats;	// 40 = 0x28
	NSMutableArray *_imageFormats;	// 44 = 0x2c
	NSString *_manufacturer;	// 48 = 0x30
	NSString *_model;	// 52 = 0x34
	NSString *_deviceVersion;	// 56 = 0x38
	NSString *_serialNumber;	// 60 = 0x3c
	BOOL _readOnlyObject;	// 64 = 0x40
}
@property(retain) NSMutableArray *captureFormats;	// G=0x301c1ef1; S=0x301c228d; converted property
@property(retain) NSMutableData *content;	// G=0x301c28b5; S=0x301c2e81; converted property
@property(retain) NSMutableArray *devicePropertiesSupported;	// G=0x301c1ee1; S=0x301c2301; converted property
@property(retain) NSString *deviceVersion;	// G=0x301c1f31; S=0x301c2111; converted property
@property(retain) NSMutableArray *eventsSupported;	// G=0x301c1ed1; S=0x301c2375; converted property
@property(assign) unsigned short functionalMode;	// G=0x301c1e91; S=0x301c1ea1; converted property
@property(retain) NSMutableArray *imageFormats;	// G=0x301c1f01; S=0x301c2219; converted property
@property(retain) NSString *manufacturer;	// G=0x301c1f11; S=0x301c21c1; converted property
@property(retain) NSString *model;	// G=0x301c1f21; S=0x301c2169; converted property
@property(retain) NSMutableArray *operationsSupported;	// G=0x301c1ec1; S=0x301c23e9; converted property
@property(retain) NSString *serialNumber;	// G=0x301c1f41; S=0x301c20b9; converted property
@property(assign) unsigned short standardVersion;	// G=0x301c1df1; S=0x301c1e01; converted property
@property(retain) NSString *vendorExtensionDescription;	// G=0x301c1e81; S=0x301c245d; converted property
@property(assign) unsigned long vendorExtensionID;	// G=0x301c1e21; S=0x301c1e31; converted property
@property(assign) unsigned short vendorExtensionVersion;	// G=0x301c1e51; S=0x301c1e61; converted property
- (id)init;	// 0x301c1f51
- (id)initWithData:(id)data;	// 0x301c2dd9
- (id)initWithMutableData:(id)mutableData;	// 0x301c2d55
- (id)canonicalManufacturer;	// 0x301c1fe1
// converted property getter: - (id)captureFormats;	// 0x301c1ef1
// converted property getter: - (id)content;	// 0x301c28b5
- (void)dealloc;	// 0x301c2c41
- (id)description;	// 0x301c24b5
// converted property getter: - (id)devicePropertiesSupported;	// 0x301c1ee1
// converted property getter: - (id)deviceVersion;	// 0x301c1f31
// converted property getter: - (id)eventsSupported;	// 0x301c1ed1
// converted property getter: - (unsigned short)functionalMode;	// 0x301c1e91
// converted property getter: - (id)imageFormats;	// 0x301c1f01
// converted property getter: - (id)manufacturer;	// 0x301c1f11
// converted property getter: - (id)model;	// 0x301c1f21
// converted property getter: - (id)operationsSupported;	// 0x301c1ec1
// converted property getter: - (id)serialNumber;	// 0x301c1f41
// converted property setter: - (void)setCaptureFormats:(id)formats;	// 0x301c228d
// converted property setter: - (void)setContent:(id)content;	// 0x301c2e81
// converted property setter: - (void)setDevicePropertiesSupported:(id)supported;	// 0x301c2301
// converted property setter: - (void)setDeviceVersion:(id)version;	// 0x301c2111
// converted property setter: - (void)setEventsSupported:(id)supported;	// 0x301c2375
// converted property setter: - (void)setFunctionalMode:(unsigned short)mode;	// 0x301c1ea1
// converted property setter: - (void)setImageFormats:(id)formats;	// 0x301c2219
// converted property setter: - (void)setManufacturer:(id)manufacturer;	// 0x301c21c1
// converted property setter: - (void)setModel:(id)model;	// 0x301c2169
// converted property setter: - (void)setOperationsSupported:(id)supported;	// 0x301c23e9
// converted property setter: - (void)setSerialNumber:(id)number;	// 0x301c20b9
// converted property setter: - (void)setStandardVersion:(unsigned short)version;	// 0x301c1e01
// converted property setter: - (void)setVendorExtensionDescription:(id)description;	// 0x301c245d
// converted property setter: - (void)setVendorExtensionID:(unsigned long)anId;	// 0x301c1e31
// converted property setter: - (void)setVendorExtensionVersion:(unsigned short)version;	// 0x301c1e61
// converted property getter: - (unsigned short)standardVersion;	// 0x301c1df1
- (void)updateContent;	// 0x301c28dd
// converted property getter: - (id)vendorExtensionDescription;	// 0x301c1e81
// converted property getter: - (unsigned long)vendorExtensionID;	// 0x301c1e21
// converted property getter: - (unsigned short)vendorExtensionVersion;	// 0x301c1e51
@end

