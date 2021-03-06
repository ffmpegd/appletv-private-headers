/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

@interface SSItemMedia : NSObject {
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x356a0569; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x356a04fd; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x356a050d; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x356a051d; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x356a0535; S=0x356a0549; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x356a0559; @synthesize=_protected
- (id)init;	// 0x356a0105
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x356a02b9
// declared property getter: - (id)URL;	// 0x356a0569
- (void)dealloc;	// 0x356a0145
- (id)description;	// 0x356a01a9
// declared property getter: - (int)durationInMilliseconds;	// 0x356a04fd
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x356a050d
- (unsigned)hash;	// 0x356a0221
- (BOOL)isEqual:(id)equal;	// 0x356a0241
// declared property getter: - (BOOL)isProtectedMedia;	// 0x356a0559
// declared property getter: - (long long)mediaFileSize;	// 0x356a051d
// declared property getter: - (id)mediaKind;	// 0x356a0535
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x356a0549
@end

