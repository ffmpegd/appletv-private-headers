/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
	NSMutableDictionary *_errInfo;	// 12 = 0xc
	NSString *_userNSID;	// 16 = 0x10
	NSString *_userRealName;	// 20 = 0x14
	NSString *_userIconServer;	// 24 = 0x18
	NSString *_userIconFarm;	// 28 = 0x1c
	NSMutableArray *_photoInfos;	// 32 = 0x20
	NSMutableArray *_photosetInfos;	// 36 = 0x24
	BOOL _photosetInfoCreated;	// 40 = 0x28
	int _curPhotosetInfoIndex;	// 44 = 0x2c
	NSMutableArray *_contactInfos;	// 48 = 0x30
	NSMutableDictionary *_photoSizeInfo;	// 52 = 0x34
	long _photoCount;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x1b0e21; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x1b0cfd; converted property
@property(readonly, assign) long photoCount;	// G=0x1b0d4d; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x1b0d5d; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x1b0d6d; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x1b0d3d; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x1b0d2d; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x1b0d0d; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x1b0d1d; converted property
+ (id)parserDelegate;	// 0x1b0285
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x1b0eed
// converted property getter: - (id)contactInfos;	// 0x1b0e21
- (void)dealloc;	// 0x1b02c9
- (void)endCount;	// 0x1b05a1
- (void)endPhotoset;	// 0x1b0b2d
- (void)endRealname;	// 0x1b0561
- (void)endTitle;	// 0x1b0b51
// converted property getter: - (id)errInfo;	// 0x1b0cfd
- (id)largeImagePath;	// 0x1b0e31
// converted property getter: - (long)photoCount;	// 0x1b0d4d
// converted property getter: - (id)photoInfos;	// 0x1b0d5d
// converted property getter: - (id)photosetInfos;	// 0x1b0d6d
- (id)photosetInfosAlphabetically;	// 0x1b0d7d
- (void)startContactWithAttributes:(id)attributes;	// 0x1b0be1
- (void)startErrWithAttributes:(id)attributes;	// 0x1b03b9
- (void)startPersonWithAttributes:(id)attributes;	// 0x1b04d5
- (void)startPhotoWithAttributes:(id)attributes;	// 0x1b0625
- (void)startPhotosWithAttributes:(id)attributes;	// 0x1b05d9
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x1b0941
- (void)startSizeWithAttributes:(id)attributes;	// 0x1b0811
- (void)startUserWithAttributes:(id)attributes;	// 0x1b0489
// converted property getter: - (id)userIconFarm;	// 0x1b0d3d
// converted property getter: - (id)userIconServer;	// 0x1b0d2d
// converted property getter: - (id)userNSID;	// 0x1b0d0d
// converted property getter: - (id)userRealName;	// 0x1b0d1d
@end
