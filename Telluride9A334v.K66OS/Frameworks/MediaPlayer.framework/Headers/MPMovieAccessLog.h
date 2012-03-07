/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
@private
	MPMovieAccessLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieAccessLogInternal _internal;	// G=0x34dceb99; S=0x34dcebad; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x34dcea35; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x34dce9f5; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x34dcea15; 
- (id)_initWithAVItemAccessLog:(id)avitemAccessLog;	// 0x34dce92d
// declared property getter: - (MPMovieAccessLogInternal)_internal;	// 0x34dceb99
- (id)copyWithZone:(NSZone *)zone;	// 0x34dce9e5
- (void)dealloc;	// 0x34dce999
// declared property getter: - (id)events;	// 0x34dcea35
// declared property getter: - (id)extendedLogData;	// 0x34dce9f5
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x34dcea15
// declared property setter: - (void)set_internal:(MPMovieAccessLogInternal)internal;	// 0x34dcebad
@end

