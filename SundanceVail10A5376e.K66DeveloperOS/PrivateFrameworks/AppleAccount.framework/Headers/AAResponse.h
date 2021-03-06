/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSHTTPURLResponse, NSDictionary, NSError;

@interface AAResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	NSHTTPURLResponse *_httpResponse;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
}
@property(retain, nonatomic) NSError *error;	// G=0x35fb10bd; S=0x35fb10cd; @synthesize=_error
@property(readonly, assign, nonatomic) NSString *protocolVersion;	// G=0x35fb1085; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x35fb10ad; @synthesize=_responseDictionary
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x35fb05b1
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data bodyIsPlist:(BOOL)plist;	// 0x35fb05f9
- (void).cxx_destruct;	// 0x35fb10f5
- (void)_parsePlistResponse:(id)response;	// 0x35fb033d
// declared property getter: - (id)error;	// 0x35fb10bd
// declared property getter: - (id)protocolVersion;	// 0x35fb1085
// declared property getter: - (id)responseDictionary;	// 0x35fb10ad
// declared property setter: - (void)setError:(id)error;	// 0x35fb10cd
@end

