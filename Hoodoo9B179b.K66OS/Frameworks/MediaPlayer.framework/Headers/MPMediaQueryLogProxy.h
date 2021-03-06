/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableArray, MPMediaQuery, NSString;

@interface MPMediaQueryLogProxy : NSObject {
@private
	MPMediaQuery *_target;	// 4 = 0x4
	MPMediaQuery *_baseObject;	// 8 = 0x8
	NSMutableArray *_loggedInvocations;	// 12 = 0xc
	NSString *_filePath;	// 16 = 0x10
}
- (id)initWithTarget:(id)target;	// 0x30981649
- (id)copyWithZone:(NSZone *)zone;	// 0x309817b1
- (void)createFilePath;	// 0x30981bd9
- (void)dealloc;	// 0x30981701
- (void)flushLog;	// 0x30981ebd
- (void)forwardInvocation:(id)invocation;	// 0x309817e1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30981b85
- (id)replacementObjectForCoder:(id)coder;	// 0x309817d1
- (void)writeLog;	// 0x30981cf9
@end

