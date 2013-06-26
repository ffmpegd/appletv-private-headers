/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSArray, NSString;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : NSObject {
	MSShPCContext _context;	// 4 = 0x4
	NSString *_personID;	// 88 = 0x58
	NSURL *_inviteURL;	// 92 = 0x5c
	NSURL *_manageURL;	// 96 = 0x60
	NSURL *_respondURL;	// 100 = 0x64
	NSURL *_statusURL;	// 104 = 0x68
	NSArray *_shares;	// 108 = 0x6c
	int _transactionType;	// 112 = 0x70
	id<MSSharingProtocolDelegate> _delegate;	// 116 = 0x74
}
@property(assign, nonatomic) id<MSSharingProtocolDelegate> delegate;	// G=0x337666ad; S=0x337666bd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x337666cd; @synthesize=_personID
+ (id)_dictShareStateFromShareState:(int)shareState;	// 0x337651dd
+ (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x3376607d
+ (id)_shareDictFromShare:(id)share;	// 0x3376540d
+ (id)_shareDictsArrayFromShares:(id)shares;	// 0x337657dd
+ (id)_shareFromShareDict:(id)shareDict;	// 0x33765201
+ (int)_shareStateFromShareDictShareState:(id)shareDictShareState;	// 0x337651bd
+ (id)_sharesFromShareDictsArray:(id)shareDictsArray;	// 0x337656b5
+ (id)shareFromPushUserInfo:(id)pushUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3 outError:(id *)error;	// 0x33766129
+ (id)shareStateFromProtocol:(id)protocol;	// 0x3376603d
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33764e25
- (void).cxx_destruct;	// 0x337666dd
- (void)_checkForFailedInvitesWithResponse:(id)response;	// 0x33765bc5
- (void)_didFailAuthenticationWithError:(id)error;	// 0x33765f5d
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x33765f81
- (void)_didFindShareState:(id)state;	// 0x33765b6d
- (void)_didFinishTransactionWithResponseObject:(id)responseObject error:(id)error;	// 0x33765ec9
- (void)abort;	// 0x33766009
- (void)dealloc;	// 0x3376516d
// declared property getter: - (id)delegate;	// 0x337666ad
- (void)deleteShares:(id)shares;	// 0x33765ae9
- (void)modifyShares:(id)shares;	// 0x33765a65
// declared property getter: - (id)personID;	// 0x337666cd
- (void)requestCurrentShareState;	// 0x33765a21
- (void)sendInvitations:(id)invitations;	// 0x33765905
- (void)sendResponseToInvitation:(id)invitation accept:(BOOL)accept;	// 0x33765995
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337666bd
@end
