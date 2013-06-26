/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSSearchDelegate;

@interface MSSearch : MSMailDefaultService {
	NSObject<OS_dispatch_queue> *_resultsQueue;	// 32 = 0x20
	NSObject<MSSearchDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x34478705; S=0x34478069; @synthesize=_delegate
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x34477ec1
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x34477ef9
+ (void)setUnitTestingResultsArray:(id)array;	// 0x34478715
- (void)_delegateDidFindResults:(id)_delegate;	// 0x3447850d
- (void)_delegateDidFinishWithError:(id)_delegate;	// 0x344784a9
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x3447820d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x34478591
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x344785c5
- (id)_initWithDelegate:(id)delegate;	// 0x34477f6d
- (BOOL)_unitTestsAreEnabled;	// 0x34478581
- (void)dealloc;	// 0x34478019
// declared property getter: - (id)delegate;	// 0x34478705
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x3447809d
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x344780f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34478069
@end
