/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class SSURLConnectionRequest, NSString;

@interface HSAccountStore : NSObject {
	int _defaultsDidChangeToken;	// 4 = 0x4
	SSURLConnectionRequest *_groupIDRequest;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleID;	// G=0x31e00de9; S=0x31e00ef1; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x31e00f9d; S=0x31e0180d; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x31e01851; S=0x31e01861; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x31e00fcd; S=0x31e00fe5; @dynamic
+ (id)defaultStore;	// 0x31e00c41
- (id)init;	// 0x31e00cf1
// declared property getter: - (id)appleID;	// 0x31e00de9
- (BOOL)canDetermineGroupID;	// 0x31e01081
- (void)clearAllCredentials;	// 0x31e01771
- (void)clearCaches;	// 0x31e017b9
- (void)clearGroupID;	// 0x31e017f9
- (void)dealloc;	// 0x31e00d75
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x31e010bd
// declared property getter: - (id)groupID;	// 0x31e00f9d
// declared property getter: - (id)groupIDRequest;	// 0x31e01851
// declared property getter: - (id)password;	// 0x31e00fcd
// declared property setter: - (void)setAppleID:(id)anId;	// 0x31e00ef1
// declared property setter: - (void)setGroupID:(id)anId;	// 0x31e0180d
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x31e01861
// declared property setter: - (void)setPassword:(id)password;	// 0x31e00fe5
@end

