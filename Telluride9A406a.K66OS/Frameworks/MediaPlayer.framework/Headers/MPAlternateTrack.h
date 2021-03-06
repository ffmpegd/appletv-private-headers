/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAlternateTrack : NSObject {
	int _trackID;	// 4 = 0x4
	NSString *_languageCode;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, retain) NSString *languageCode;	// G=0x319c41ad; converted property
@property(retain) NSString *name;	// G=0x319c41bd; S=0x319c41cd; converted property
@property(readonly, assign) int trackID;	// G=0x319c4211; converted property
+ (id)copyOffTrack;	// 0x319c3fa9
+ (id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;	// 0x319c4221
- (id)initWithTrackID:(id)trackID languageCode:(id)code name:(id)name;	// 0x319c3f25
- (int)compare:(id)compare;	// 0x319c40a9
- (void)dealloc;	// 0x319c4049
- (id)description;	// 0x319c4301
- (id)humanReadableLanguage;	// 0x319c4161
// converted property getter: - (id)languageCode;	// 0x319c41ad
// converted property getter: - (id)name;	// 0x319c41bd
// converted property setter: - (void)setName:(id)name;	// 0x319c41cd
// converted property getter: - (int)trackID;	// 0x319c4211
@end

