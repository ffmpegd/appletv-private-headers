/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPLoadPredefinedQueue : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int mediaItemType;	// G=0x34249fe5; S=0x3424a00d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34249f09; S=0x34249f85; 
+ (id)loadPredefinedQueue;	// 0x34249e79
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;	// 0x34249ebd
- (id)encodedClassName;	// 0x34249e6d
- (id)groupIdentifier;	// 0x34249e5d
// declared property getter: - (int)mediaItemType;	// 0x34249fe5
- (BOOL)requiresResponse;	// 0x3424a03d
// declared property setter: - (void)setMediaItemType:(int)type;	// 0x3424a00d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x34249f85
// declared property getter: - (id)targetAppId;	// 0x34249f09
@end

