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
- (id)initWithTarget:(id)target;	// 0x3376eae1
- (id)copyWithZone:(NSZone *)zone;	// 0x3376ea15
- (void)createFilePath;	// 0x3376ef39
- (void)dealloc;	// 0x3376ea35
- (void)flushLog;	// 0x3376e955
- (void)forwardInvocation:(id)invocation;	// 0x3376ec15
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3376e9cd
- (id)replacementObjectForCoder:(id)coder;	// 0x3376c311
- (void)writeLog;	// 0x3376f041
@end
