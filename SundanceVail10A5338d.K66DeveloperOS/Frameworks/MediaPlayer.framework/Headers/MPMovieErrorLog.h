/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData, NSArray;

@interface MPMovieErrorLog : NSObject <NSCopying> {
	MPMovieErrorLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;	// G=0x341471f1; S=0x34147205; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x34147065; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x34147025; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x34147045; 
- (id)_initWithAVItemErrorLog:(id)avitemErrorLog;	// 0x34146f5d
// declared property getter: - (MPMovieErrorLogInternal)_internal;	// 0x341471f1
- (id)copyWithZone:(NSZone *)zone;	// 0x34147015
- (void)dealloc;	// 0x34146fc9
// declared property getter: - (id)events;	// 0x34147065
// declared property getter: - (id)extendedLogData;	// 0x34147025
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x34147045
// declared property setter: - (void)set_internal:(MPMovieErrorLogInternal)internal;	// 0x34147205
@end

