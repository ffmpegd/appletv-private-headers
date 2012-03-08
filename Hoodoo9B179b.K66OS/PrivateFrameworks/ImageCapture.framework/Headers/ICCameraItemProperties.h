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
@property(retain) NSString *UTI;	// G=0x358bd0e1; S=0x358bd0bd; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0x358bd11d; S=0x358bd0f9; @synthesize=_creationDate
@property(assign) ICCameraDevice *device;	// G=0x358bcaad; S=0x358bcabd; @synthesize=_device
@property(assign) BOOL locked;	// G=0x358bca6d; S=0x358bca7d; @synthesize=_locked
@property(retain) NSDate *modificationDate;	// G=0x358bd159; S=0x358bd135; @synthesize=_modificationDate
@property(retain) NSString *name;	// G=0x358bd0a5; S=0x358bd081; @synthesize=_name
@property(assign) ICCameraFolder *parentFolder;	// G=0x358bca8d; S=0x358bca9d; @synthesize=_parentFolder
@property(retain) NSMutableDictionary *userData;	// G=0x358bd195; S=0x358bd171; @synthesize=_userData
// declared property getter: - (id)UTI;	// 0x358bd0e1
// declared property getter: - (id)creationDate;	// 0x358bd11d
- (void)dealloc;	// 0x358bcfc9
// declared property getter: - (id)device;	// 0x358bcaad
- (void)finalize;	// 0x358bd1ad
// declared property getter: - (BOOL)locked;	// 0x358bca6d
// declared property getter: - (id)modificationDate;	// 0x358bd159
// declared property getter: - (id)name;	// 0x358bd0a5
// declared property getter: - (id)parentFolder;	// 0x358bca8d
// declared property setter: - (void)setCreationDate:(id)date;	// 0x358bd0f9
// declared property setter: - (void)setDevice:(id)device;	// 0x358bcabd
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x358bca7d
// declared property setter: - (void)setModificationDate:(id)date;	// 0x358bd135
// declared property setter: - (void)setName:(id)name;	// 0x358bd081
// declared property setter: - (void)setParentFolder:(id)folder;	// 0x358bca9d
// declared property setter: - (void)setUTI:(id)uti;	// 0x358bd0bd
// declared property setter: - (void)setUserData:(id)data;	// 0x358bd171
// declared property getter: - (id)userData;	// 0x358bd195
@end
