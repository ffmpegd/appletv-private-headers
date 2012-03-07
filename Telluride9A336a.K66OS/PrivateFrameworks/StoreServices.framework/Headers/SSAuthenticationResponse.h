/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSHTTPURLResponse, NSNumber;

@interface SSAuthenticationResponse : NSObject {
@private
	NSDictionary *_responseDictionary;	// 4 = 0x4
	int _urlBagType;	// 8 = 0x8
	NSHTTPURLResponse *_urlResponse;	// 12 = 0xc
}
@property(assign) int URLBagType;	// G=0x34214999; S=0x342149a9; @synthesize=_urlBagType
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x34214801; 
@property(readonly, assign) int accountKind;	// G=0x34213ed1; 
@property(readonly, assign) NSString *accountName;	// G=0x34213f89; 
@property(readonly, assign) NSNumber *accountUniqueIdentifier;	// G=0x34214075; 
@property(readonly, assign) int availableServiceTypes;	// G=0x342140c9; 
@property(readonly, assign) NSString *creditsString;	// G=0x342141ed; 
@property(readonly, assign) int enabledServiceTypes;	// G=0x3421427d; 
@property(readonly, assign) NSNumber *failureType;	// G=0x34214465; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x34214989; @synthesize=_responseDictionary
@property(readonly, assign) int responseType;	// G=0x34214685; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x34214705; 
@property(readonly, assign) NSString *token;	// G=0x34214771; 
@property(readonly, assign) NSString *userMessage;	// G=0x34214839; 
- (id)initWithURLResponse:(id)urlresponse dictionary:(id)dictionary;	// 0x34213e11
// declared property getter: - (int)URLBagType;	// 0x34214999
// declared property getter: - (id)URLResponse;	// 0x34214801
- (int)_responseTypeForFailureType:(int)failureType;	// 0x342148c9
- (int)_responseTypeForStatusValue:(int)statusValue;	// 0x342148e5
- (id)_statusValue;	// 0x34214905
// declared property getter: - (int)accountKind;	// 0x34213ed1
// declared property getter: - (id)accountName;	// 0x34213f89
// declared property getter: - (id)accountUniqueIdentifier;	// 0x34214075
// declared property getter: - (int)availableServiceTypes;	// 0x342140c9
// declared property getter: - (id)creditsString;	// 0x342141ed
- (void)dealloc;	// 0x34213e85
// declared property getter: - (int)enabledServiceTypes;	// 0x3421427d
// declared property getter: - (id)failureType;	// 0x34214465
- (id)newAccount;	// 0x342144e9
// declared property getter: - (id)responseDictionary;	// 0x34214989
// declared property getter: - (int)responseType;	// 0x34214685
// declared property setter: - (void)setURLBagType:(int)type;	// 0x342149a9
// declared property getter: - (id)storeFrontIdentifier;	// 0x34214705
// declared property getter: - (id)token;	// 0x34214771
// declared property getter: - (id)userMessage;	// 0x34214839
@end

