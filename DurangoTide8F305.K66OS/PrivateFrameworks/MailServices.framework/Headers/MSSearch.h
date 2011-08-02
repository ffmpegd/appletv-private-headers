/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, CPDistributedMessagingCenter;
@protocol MSSearchDelegate;

@interface MSSearch : NSObject {
@private
	NSLock *_lock;	// 4 = 0x4
	CPDistributedMessagingCenter *_server;	// 8 = 0x8
	CPDistributedMessagingCenter *_search;	// 12 = 0xc
	NSObject<MSSearchDelegate> *_delegate;	// 16 = 0x10
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x31afece1; S=0x31afec91; 
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x31afed65
- (id)init;	// 0x31aff231
- (id)_activeSearch;	// 0x31afeae1
- (id)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error;	// 0x31aff409
- (id)_copyServer;	// 0x31afec3d
- (id)_didFindMessageData:(id)data userInfo:(id)info;	// 0x31afe3e1
- (id)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server;	// 0x31afe7bd
- (id)_initWithDelegate:(id)delegate;	// 0x31afed41
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x31afe5dd
- (void)_setActiveSearch:(id)search;	// 0x31afe9d5
- (void)_setServer:(id)server;	// 0x31afeb41
- (void)cancel;	// 0x31afe7a5
- (void)dealloc;	// 0x31aff1b9
// declared property getter: - (id)delegate;	// 0x31afece1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31afec91
@end
