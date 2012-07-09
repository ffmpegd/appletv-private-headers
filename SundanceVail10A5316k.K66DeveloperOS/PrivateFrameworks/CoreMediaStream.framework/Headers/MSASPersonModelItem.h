/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class MSASAlbum;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying> {
@private
	int _errorCount;	// 4 = 0x4
	MSASAlbum *_album;	// 8 = 0x8
	id<NSObject> _object;	// 12 = 0xc
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x339c8469; S=0x339c8479; @synthesize=_album
@property(assign, nonatomic) int errorCount;	// G=0x339c8449; S=0x339c8459; @synthesize=_errorCount
@property(retain, nonatomic) id<NSObject> object;	// G=0x339c84a1; S=0x339c84b1; @synthesize=_object
- (void).cxx_destruct;	// 0x339c84c5
// declared property getter: - (id)album;	// 0x339c8469
- (id)copyWithZone:(NSZone *)zone;	// 0x339c8381
// declared property getter: - (int)errorCount;	// 0x339c8449
- (BOOL)isEqual:(id)equal;	// 0x339c82b1
// declared property getter: - (id)object;	// 0x339c84a1
// declared property setter: - (void)setAlbum:(id)album;	// 0x339c8479
// declared property setter: - (void)setErrorCount:(int)count;	// 0x339c8459
// declared property setter: - (void)setObject:(id)object;	// 0x339c84b1
@end
