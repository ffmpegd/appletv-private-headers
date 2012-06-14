/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
@private
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x328bb15d; S=0x328bb229; converted property
@property(retain) NSDate *modDate;	// G=0x328bac59; S=0x328bad25; converted property
@property(retain) NSString *parentAccountID;	// G=0x328baf91; S=0x328bb05d; converted property
@property(retain) NSString *parentAccountName;	// G=0x328badf5; S=0x328baec1; converted property
@property(retain) NSString *previewURL;	// G=0x328bb3c9; S=0x328bb2f9; converted property
- (id)collectionDictionary;	// 0x328bb155
- (void)dealloc;	// 0x328babbd
- (BOOL)isLocal;	// 0x328bb159
// converted property getter: - (id)lastCheckedDate;	// 0x328bb15d
// converted property getter: - (id)modDate;	// 0x328bac59
- (long)numberOfPhotos;	// 0x328bb12d
// converted property getter: - (id)parentAccountID;	// 0x328baf91
// converted property getter: - (id)parentAccountName;	// 0x328badf5
// converted property getter: - (id)previewURL;	// 0x328bb3c9
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x328bb229
// converted property setter: - (void)setModDate:(id)date;	// 0x328bad25
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x328bb05d
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x328baec1
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x328bb2f9
@end
