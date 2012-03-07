/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x354aba05; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x354aba75; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x354ab845; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x354ab8b5; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x354ab2e5; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x354ab925; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x354ab995; 
- (id)init;	// 0x354ab7a1
- (id)initWithDictionary:(id)dictionary;	// 0x354ab275
// declared property getter: - (id)URI;	// 0x354aba05
- (id)copyWithZone:(NSZone *)zone;	// 0x354ab2d5
// declared property getter: - (id)date;	// 0x354aba75
- (void)dealloc;	// 0x354abae5
// declared property getter: - (id)errorComment;	// 0x354ab845
// declared property getter: - (id)errorDomain;	// 0x354ab8b5
// declared property getter: - (int)errorStatusCode;	// 0x354ab2e5
- (void)finalize;	// 0x354abb55
// declared property getter: - (id)playbackSessionID;	// 0x354ab925
// declared property getter: - (id)serverAddress;	// 0x354ab995
@end

