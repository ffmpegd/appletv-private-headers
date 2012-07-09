/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPObjectInfoDataset : NSObject {
	unsigned long _storageID;	// 4 = 0x4
	unsigned short _objectFormat;	// 8 = 0x8
	unsigned short _protectionStatus;	// 10 = 0xa
	unsigned long long _objectCompressedSize;	// 12 = 0xc
	unsigned short _thumbFormat;	// 20 = 0x14
	unsigned long _thumbCompressedSize;	// 24 = 0x18
	unsigned long _thumbOffset;	// 28 = 0x1c
	unsigned long _thumbPixWidth;	// 32 = 0x20
	unsigned long _thumbPixHeight;	// 36 = 0x24
	unsigned long _imagePixWidth;	// 40 = 0x28
	unsigned long _imagePixHeight;	// 44 = 0x2c
	unsigned long _imageBitDepth;	// 48 = 0x30
	unsigned long _parentObject;	// 52 = 0x34
	unsigned short _associationType;	// 56 = 0x38
	unsigned long _associationDesc;	// 60 = 0x3c
	unsigned long _sequenceNumber;	// 64 = 0x40
	NSString *_filename;	// 68 = 0x44
	NSString *_captureDate;	// 72 = 0x48
	NSString *_modificationDate;	// 76 = 0x4c
	NSString *_keywords;	// 80 = 0x50
	unsigned long _thmFileSize;	// 84 = 0x54
	unsigned long _objectHandle;	// 88 = 0x58
}
@property(assign) unsigned long associationDesc;	// G=0x33e5e3fd; S=0x33e5e40d; converted property
@property(assign) unsigned short associationType;	// G=0x33e5e3dd; S=0x33e5e3ed; converted property
@property(retain) NSString *captureDate;	// G=0x33e5e491; S=0x33e5e4a1; converted property
@property(retain) NSString *filename;	// G=0x33e5e43d; S=0x33e5e44d; converted property
@property(assign) unsigned long imageBitDepth;	// G=0x33e5e39d; S=0x33e5e3ad; converted property
@property(assign) unsigned long imagePixHeight;	// G=0x33e5e37d; S=0x33e5e38d; converted property
@property(assign) unsigned long imagePixWidth;	// G=0x33e5e35d; S=0x33e5e36d; converted property
@property(retain) NSString *keywords;	// G=0x33e5e56d; S=0x33e5e57d; converted property
@property(retain) NSString *modificationDate;	// G=0x33e5e519; S=0x33e5e529; converted property
@property(assign) unsigned short objectFormat;	// G=0x33e5e211; S=0x33e5e221; converted property
@property(assign) unsigned long objectHandle;	// G=0x33e5e5c1; S=0x33e5e5d1; converted property
@property(assign) unsigned long parentObject;	// G=0x33e5e3bd; S=0x33e5e3cd; converted property
@property(assign) unsigned short protectionStatus;	// G=0x33e5e231; S=0x33e5e241; converted property
@property(assign) unsigned long sequenceNumber;	// G=0x33e5e41d; S=0x33e5e42d; converted property
@property(assign) unsigned long storageID;	// G=0x33e5e1f1; S=0x33e5e201; converted property
@property(assign) unsigned long thmFileSize;	// G=0x33e5e2dd; S=0x33e5e2ed; converted property
@property(assign) unsigned long thumbCompressedSize;	// G=0x33e5e2bd; S=0x33e5e2cd; converted property
@property(assign) unsigned short thumbFormat;	// G=0x33e5e29d; S=0x33e5e2ad; converted property
@property(assign) unsigned long thumbOffset;	// G=0x33e5e2fd; S=0x33e5e30d; converted property
@property(assign) unsigned long thumbPixHeight;	// G=0x33e5e33d; S=0x33e5e34d; converted property
@property(assign) unsigned long thumbPixWidth;	// G=0x33e5e31d; S=0x33e5e32d; converted property
- (id)init;	// 0x33e5d4f5
- (id)initWithData64:(id)data64;	// 0x33e5d7f5
- (id)initWithData:(id)data;	// 0x33e5d521
// converted property getter: - (unsigned long)associationDesc;	// 0x33e5e3fd
// converted property getter: - (unsigned short)associationType;	// 0x33e5e3dd
// converted property getter: - (id)captureDate;	// 0x33e5e491
- (id)content;	// 0x33e5db55
- (id)content64;	// 0x33e5ddc9
- (void)dealloc;	// 0x33e5dac9
- (id)description;	// 0x33e5e031
// converted property getter: - (id)filename;	// 0x33e5e43d
// converted property getter: - (unsigned long)imageBitDepth;	// 0x33e5e39d
// converted property getter: - (unsigned long)imagePixHeight;	// 0x33e5e37d
// converted property getter: - (unsigned long)imagePixWidth;	// 0x33e5e35d
// converted property getter: - (id)keywords;	// 0x33e5e56d
// converted property getter: - (id)modificationDate;	// 0x33e5e519
- (unsigned long)objectCompressedSize;	// 0x33e5e269
- (unsigned long long)objectCompressedSize64;	// 0x33e5e251
// converted property getter: - (unsigned short)objectFormat;	// 0x33e5e211
// converted property getter: - (unsigned long)objectHandle;	// 0x33e5e5c1
// converted property getter: - (unsigned long)parentObject;	// 0x33e5e3bd
// converted property getter: - (unsigned short)protectionStatus;	// 0x33e5e231
// converted property getter: - (unsigned long)sequenceNumber;	// 0x33e5e41d
// converted property setter: - (void)setAssociationDesc:(unsigned long)desc;	// 0x33e5e40d
// converted property setter: - (void)setAssociationType:(unsigned short)type;	// 0x33e5e3ed
// converted property setter: - (void)setCaptureDate:(id)date;	// 0x33e5e4a1
// converted property setter: - (void)setFilename:(id)filename;	// 0x33e5e44d
// converted property setter: - (void)setImageBitDepth:(unsigned long)depth;	// 0x33e5e3ad
// converted property setter: - (void)setImagePixHeight:(unsigned long)height;	// 0x33e5e38d
// converted property setter: - (void)setImagePixWidth:(unsigned long)width;	// 0x33e5e36d
// converted property setter: - (void)setKeywords:(id)keywords;	// 0x33e5e57d
// converted property setter: - (void)setModificationDate:(id)date;	// 0x33e5e529
- (void)setObjectCompressedSize:(unsigned long long)size;	// 0x33e5e289
// converted property setter: - (void)setObjectFormat:(unsigned short)format;	// 0x33e5e221
// converted property setter: - (void)setObjectHandle:(unsigned long)handle;	// 0x33e5e5d1
// converted property setter: - (void)setParentObject:(unsigned long)object;	// 0x33e5e3cd
// converted property setter: - (void)setProtectionStatus:(unsigned short)status;	// 0x33e5e241
// converted property setter: - (void)setSequenceNumber:(unsigned long)number;	// 0x33e5e42d
// converted property setter: - (void)setStorageID:(unsigned long)anId;	// 0x33e5e201
// converted property setter: - (void)setThmFileSize:(unsigned long)size;	// 0x33e5e2ed
// converted property setter: - (void)setThumbCompressedSize:(unsigned long)size;	// 0x33e5e2cd
// converted property setter: - (void)setThumbFormat:(unsigned short)format;	// 0x33e5e2ad
// converted property setter: - (void)setThumbOffset:(unsigned long)offset;	// 0x33e5e30d
// converted property setter: - (void)setThumbPixHeight:(unsigned long)height;	// 0x33e5e34d
// converted property setter: - (void)setThumbPixWidth:(unsigned long)width;	// 0x33e5e32d
// converted property getter: - (unsigned long)storageID;	// 0x33e5e1f1
// converted property getter: - (unsigned long)thmFileSize;	// 0x33e5e2dd
// converted property getter: - (unsigned long)thumbCompressedSize;	// 0x33e5e2bd
// converted property getter: - (unsigned short)thumbFormat;	// 0x33e5e29d
// converted property getter: - (unsigned long)thumbOffset;	// 0x33e5e2fd
// converted property getter: - (unsigned long)thumbPixHeight;	// 0x33e5e33d
// converted property getter: - (unsigned long)thumbPixWidth;	// 0x33e5e31d
@end
