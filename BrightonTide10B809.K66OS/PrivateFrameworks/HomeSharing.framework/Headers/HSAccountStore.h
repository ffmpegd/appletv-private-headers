/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject {
	int _defaultsDidChangeToken;	// 4 = 0x4
	SSURLConnectionRequest *_groupIDRequest;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleID;	// G=0x340df285; S=0x340df3ad; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x340df481; S=0x340dfcf1; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x340dfd45; S=0x340dfd55; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x340df4b1; S=0x340df4c9; @dynamic
+ (id)defaultStore;	// 0x340defe9
- (id)init;	// 0x340df099
// declared property getter: - (id)appleID;	// 0x340df285
- (BOOL)canDetermineGroupID;	// 0x340df565
- (void)clearAllCredentials;	// 0x340dfc55
- (void)clearCaches;	// 0x340dfc9d
- (void)clearGroupID;	// 0x340dfcdd
- (void)dealloc;	// 0x340df211
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x340df5a1
// declared property getter: - (id)groupID;	// 0x340df481
// declared property getter: - (id)groupIDRequest;	// 0x340dfd45
// declared property getter: - (id)password;	// 0x340df4b1
// declared property setter: - (void)setAppleID:(id)anId;	// 0x340df3ad
// declared property setter: - (void)setGroupID:(id)anId;	// 0x340dfcf1
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x340dfd55
// declared property setter: - (void)setPassword:(id)password;	// 0x340df4c9
@end

