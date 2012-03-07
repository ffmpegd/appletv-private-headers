/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSManagedObjectID, NSNumber, ClientIdentity, NSString;

__attribute__((visibility("hidden")))
@interface FinishMicroPaymentOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	NSManagedObjectID *_objectID;	// 64 = 0x40
	NSString *_transactionIdentifier;	// 68 = 0x44
	NSNumber *_userDSID;	// 72 = 0x48
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x33becec1; S=0x33beced5; @synthesize=_clientIdentity
@property(retain) NSManagedObjectID *objectID;	// G=0x33becef9; S=0x33becf0d; @synthesize=_objectID
@property(retain) NSString *transactionIdentifier;	// G=0x33becf31; S=0x33becf45; @synthesize=_transactionIdentifier
@property(retain) NSNumber *userDSID;	// G=0x33becf69; S=0x33becf7d; @synthesize=_userDSID
- (id)initWithObjectID:(id)objectID;	// 0x33beca55
- (BOOL)_parseResponse:(id)response returningError:(id *)error;	// 0x33becdf9
// declared property getter: - (id)clientIdentity;	// 0x33becec1
- (void)dealloc;	// 0x33beca89
// declared property getter: - (id)objectID;	// 0x33becef9
- (void)run;	// 0x33becb1d
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33beced5
// declared property setter: - (void)setObjectID:(id)anId;	// 0x33becf0d
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x33becf45
// declared property setter: - (void)setUserDSID:(id)dsid;	// 0x33becf7d
// declared property getter: - (id)transactionIdentifier;	// 0x33becf31
// declared property getter: - (id)userDSID;	// 0x33becf69
@end

