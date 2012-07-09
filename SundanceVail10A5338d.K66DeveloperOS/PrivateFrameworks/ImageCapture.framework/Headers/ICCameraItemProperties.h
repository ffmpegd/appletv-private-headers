/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate;

@interface ICCameraItemProperties : NSObject {
	ICCameraDevice *_device;	// 4 = 0x4
	ICCameraFolder *_parentFolder;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_UTI;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
	NSDate *_modificationDate;	// 24 = 0x18
	BOOL _locked;	// 28 = 0x1c
	NSMutableDictionary *_userData;	// 32 = 0x20
}
@property(retain) NSString *UTI;	// G=0x33e4122d; S=0x33e41241; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0x33e41265; S=0x33e41279; @synthesize=_creationDate
@property(assign) ICCameraDevice *device;	// G=0x33e4119d; S=0x33e411b1; @synthesize=_device
@property(assign) BOOL locked;	// G=0x33e412d5; S=0x33e412ed; @synthesize=_locked
@property(retain) NSDate *modificationDate;	// G=0x33e4129d; S=0x33e412b1; @synthesize=_modificationDate
@property(retain) NSString *name;	// G=0x33e411f5; S=0x33e41209; @synthesize=_name
@property(assign) ICCameraFolder *parentFolder;	// G=0x33e411c9; S=0x33e411dd; @synthesize=_parentFolder
@property(retain) NSMutableDictionary *userData;	// G=0x33e41305; S=0x33e41319; @synthesize=_userData
// declared property getter: - (id)UTI;	// 0x33e4122d
// declared property getter: - (id)creationDate;	// 0x33e41265
- (void)dealloc;	// 0x33e41025
// declared property getter: - (id)device;	// 0x33e4119d
- (void)finalize;	// 0x33e410e1
// declared property getter: - (BOOL)locked;	// 0x33e412d5
// declared property getter: - (id)modificationDate;	// 0x33e4129d
// declared property getter: - (id)name;	// 0x33e411f5
// declared property getter: - (id)parentFolder;	// 0x33e411c9
// declared property setter: - (void)setCreationDate:(id)date;	// 0x33e41279
// declared property setter: - (void)setDevice:(id)device;	// 0x33e411b1
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x33e412ed
// declared property setter: - (void)setModificationDate:(id)date;	// 0x33e412b1
// declared property setter: - (void)setName:(id)name;	// 0x33e41209
// declared property setter: - (void)setParentFolder:(id)folder;	// 0x33e411dd
// declared property setter: - (void)setUTI:(id)uti;	// 0x33e41241
// declared property setter: - (void)setUserData:(id)data;	// 0x33e41319
// declared property getter: - (id)userData;	// 0x33e41305
@end
