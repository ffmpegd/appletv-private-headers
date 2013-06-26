/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *requestId;	// G=0x353e2ba5; S=0x353e2bc1; 
+ (id)rollbackRequest;	// 0x353e2b15
+ (id)rollbackRequestWithDictionary:(id)dictionary context:(id)context;	// 0x353e2b59
- (id)encodedClassName;	// 0x353e2b09
- (id)groupIdentifier;	// 0x353e2af9
// declared property getter: - (id)requestId;	// 0x353e2ba5
// declared property setter: - (void)setRequestId:(id)anId;	// 0x353e2bc1
@end
