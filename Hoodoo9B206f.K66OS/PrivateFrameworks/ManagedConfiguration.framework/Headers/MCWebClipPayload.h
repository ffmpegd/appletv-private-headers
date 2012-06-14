/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSData, NSURL;

@interface MCWebClipPayload : MCPayload {
@private
	NSURL *_URL;	// 40 = 0x28
	NSString *_label;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	BOOL _isRemovable;	// 52 = 0x34
	BOOL _precomposed;	// 53 = 0x35
	BOOL _fullScreen;	// 54 = 0x36
}
@property(readonly, assign) NSURL *URL;	// G=0x318f8481; @synthesize=_URL
@property(readonly, assign) BOOL fullScreen;	// G=0x318f8431; @synthesize=_fullScreen
@property(readonly, assign) NSData *iconData;	// G=0x318f8461; @synthesize=_iconData
@property(readonly, assign) BOOL isRemovable;	// G=0x318f8451; @synthesize=_isRemovable
@property(readonly, assign) NSString *label;	// G=0x318f8471; @synthesize=_label
@property(readonly, assign) BOOL precomposed;	// G=0x318f8441; @synthesize=_precomposed
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x318f8579
+ (id)typeStrings;	// 0x318f85d9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x318f886d
// declared property getter: - (id)URL;	// 0x318f8481
- (void)dealloc;	// 0x318f8669
- (id)description;	// 0x318f86dd
// declared property getter: - (BOOL)fullScreen;	// 0x318f8431
// declared property getter: - (id)iconData;	// 0x318f8461
// declared property getter: - (BOOL)isRemovable;	// 0x318f8451
// declared property getter: - (id)label;	// 0x318f8471
// declared property getter: - (BOOL)precomposed;	// 0x318f8441
- (id)stubDictionary;	// 0x318f8491
- (id)subtitle1Description;	// 0x318f8621
- (id)subtitle1Label;	// 0x318f8649
- (id)subtitle2Description;	// 0x318f8601
- (id)subtitle2Label;	// 0x318f8611
- (id)title;	// 0x318f8659
@end
