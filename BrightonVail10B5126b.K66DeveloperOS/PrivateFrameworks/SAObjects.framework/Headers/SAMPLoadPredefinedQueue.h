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
@property(assign, nonatomic) int mediaItemType;	// G=0x353e323d; S=0x353e3265; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353e3161; S=0x353e31dd; 
+ (id)loadPredefinedQueue;	// 0x353e30d1
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;	// 0x353e3115
- (id)encodedClassName;	// 0x353e30c5
- (id)groupIdentifier;	// 0x353e30b5
// declared property getter: - (int)mediaItemType;	// 0x353e323d
- (BOOL)requiresResponse;	// 0x353e3295
// declared property setter: - (void)setMediaItemType:(int)type;	// 0x353e3265
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353e31dd
// declared property getter: - (id)targetAppId;	// 0x353e3161
@end
