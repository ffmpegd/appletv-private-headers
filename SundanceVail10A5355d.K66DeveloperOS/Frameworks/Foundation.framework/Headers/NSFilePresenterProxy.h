/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
	BOOL _isInSuperArbiter;	// 20 = 0x14
	id _prewritingProcedure;	// 24 = 0x18
	unsigned _writingRelinquishmentCount;	// 28 = 0x1c
	id _currentWriterPurposeID;	// 32 = 0x20
	id _postwritingProcedure;	// 36 = 0x24
	BOOL _didObserveMovingByWriter;	// 40 = 0x28
	BOOL _didObserveVersionChangingByWriter;	// 41 = 0x29
}
@property(readonly, retain) id currentWriterPurposeID;	// G=0x3475ee65; converted property
+ (id)urlWithItemURL:(id)itemURL subitemPath:(id)path;	// 0x3475dec1
- (void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;	// 0x3475e18d
- (void)afterRelinquishingToWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x3475ee0d
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x3475ee9d
// converted property getter: - (id)currentWriterPurposeID;	// 0x3475ee65
- (void)dealloc;	// 0x3475dc9d
- (BOOL)didObserveMoving;	// 0x3475eef1
- (void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;	// 0x3475ed3d
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;	// 0x3475e799
- (void)forwardUsingMessageSender:(id)sender;	// 0x3475dd5d
- (BOOL)hasRelinquishedToWriter;	// 0x3475ee4d
- (void)observeChangeByWriterWithPurposeID:(id)purposeID;	// 0x3475e2b9
- (void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;	// 0x3475e4c9
- (void)observeDisconnectionByWriterWithPurposeID:(id)purposeID;	// 0x3475e3d9
- (void)observeMoveByWriterWithPurposeID:(id)purposeID;	// 0x3475e331
- (void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;	// 0x3475e551
- (void)observeReconnectionByWriterWithPurposeID:(id)purposeID;	// 0x3475e451
- (void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;	// 0x3475e5ed
- (void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;	// 0x3475ddfd
- (void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;	// 0x3475df4d
- (void)resetMoveObserving;	// 0x3475eedd
- (void)saveChangesWithCompletionHandler:(id)completionHandler;	// 0x3475e0b9
- (void)setInSuperarbiter;	// 0x3475dde9
- (void)setItemLocation:(id)location;	// 0x3475dd15
- (void)updateLastEventIdentifier:(unsigned long long)identifier;	// 0x3475e6f9
@end

