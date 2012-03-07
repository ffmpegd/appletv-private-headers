/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
@private
	BOOL _isInSuperArbiter;	// 20 = 0x14
	unsigned _writingRelinquishmentCount;	// 24 = 0x18
	id _currentWriterPurposeID;	// 28 = 0x1c
	id _postwritingProcedure;	// 32 = 0x20
	BOOL _didObserveMovingByWriter;	// 36 = 0x24
	BOOL _didObserveVersionChangingByWriter;	// 37 = 0x25
}
@property(readonly, retain) id currentWriterPurposeID;	// G=0x30715119; converted property
+ (id)urlWithItemURL:(id)itemURL subitemPath:(id)path;	// 0x30714385
- (void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;	// 0x30714659
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x30715151
// converted property getter: - (id)currentWriterPurposeID;	// 0x30715119
- (void)dealloc;	// 0x30714171
- (BOOL)didObserveMoving;	// 0x307151a5
- (void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;	// 0x30715035
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;	// 0x30714ae9
- (void)forwardUsingMessageSender:(id)sender;	// 0x3071421d
- (BOOL)hasRelinquishedToWriter;	// 0x30715101
- (void)observeChangeByWriterWithPurposeID:(id)purposeID;	// 0x30714791
- (void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;	// 0x307148b5
- (void)observeMoveByWriterWithPurposeID:(id)purposeID;	// 0x30714809
- (void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;	// 0x30714939
- (void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;	// 0x307149d5
- (void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;	// 0x307142bd
- (void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;	// 0x30714411
- (void)resetMoveObserving;	// 0x30715191
- (void)saveChangesWithCompletionHandler:(id)completionHandler;	// 0x30714585
- (void)setInSuperarbiter;	// 0x307142a9
- (void)setItemLocation:(id)location;	// 0x307141d1
@end

