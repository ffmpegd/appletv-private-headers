/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, SAPerson;

@interface SASmsRecipientSearch : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAPerson *recipient;	// G=0x304f84fd; S=0x304f8551; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x304f858d; S=0x304f8609; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x304f8421; S=0x304f849d; 
+ (id)recipientSearch;	// 0x304f8391
+ (id)recipientSearchWithDictionary:(id)dictionary context:(id)context;	// 0x304f83d5
- (id)encodedClassName;	// 0x304f8385
- (id)groupIdentifier;	// 0x304f8375
// declared property getter: - (id)recipient;	// 0x304f84fd
// declared property getter: - (id)recipients;	// 0x304f858d
- (BOOL)requiresResponse;	// 0x304f8671
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x304f8551
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x304f8609
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x304f849d
// declared property getter: - (id)targetAppId;	// 0x304f8421
@end

