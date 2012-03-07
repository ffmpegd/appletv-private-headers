/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface NSFileCoordinator : NSObject {
@private
	id _accessArbiter;	// 4 = 0x4
	id _fileReactor;	// 8 = 0x8
	id _purposeID;	// 12 = 0xc
	NSURL *_recentFilePresenterURL;	// 16 = 0x10
	id _accessClaimIDOrIDs;	// 20 = 0x14
	BOOL _isCancelled;	// 24 = 0x18
	id _reserved;	// 28 = 0x1c
}
@property(retain) id purposeIdentifier;	// G=0x30713cd5; S=0x30713c91; converted property
+ (void)__itemAtURL:(id)url didGainVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x30713885
+ (void)__itemAtURL:(id)url didLoseVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x30713971
+ (void)__itemAtURL:(id)url didMoveToURL:(id)url2 purposeID:(id)anId;	// 0x307137a1
+ (void)__itemAtURL:(id)url didResolveConflictVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x30713a5d
+ (void)_addFileProvider:(id)provider;	// 0x30713b49
+ (id)_canonicalURLForURL:(id)url;	// 0x3070fe61
+ (id)_fileProviders;	// 0x30713bd1
+ (void)_removeFileProvider:(id)provider;	// 0x30713b8d
+ (BOOL)_skipCoordinationWork;	// 0x30710bb5
+ (void)addFilePresenter:(id)presenter;	// 0x3070fbb5
+ (id)filePresenters;	// 0x3070fc3d
+ (void)removeFilePresenter:(id)presenter;	// 0x3070fbf9
- (id)init;	// 0x3070fc7d
- (id)initWithFilePresenter:(id)filePresenter;	// 0x3070fc91
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x30712591
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x30712c59
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x307128f5
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x30713009
- (void)__prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 byAccessor:(id)accessor;	// 0x307133b9
- (void)_blockOnAccessClaim:(id)claim;	// 0x30710ec9
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x307112d1
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x30711b01
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x307116e9
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x30711fd5
- (void)_forgetAccessClaimForID:(id)anId;	// 0x30710dfd
- (void)_invokeAccessor:(id)accessor orDont:(BOOL)dont thenRelinquishAccessClaimForID:(id)anId;	// 0x307110d9
- (void)_itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x307124a9
- (void)_requestAccessClaim:(id)claim withProcedure:(id)procedure;	// 0x30710c4d
- (void)_setFileProvider:(id)provider;	// 0x30713c11
- (void)cancel;	// 0x30710a6d
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3070fe65
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x30710215
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3071003d
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x30710401
- (void)dealloc;	// 0x3070fdc5
- (void)itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x307109e1
- (void)prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x307105ed
// converted property getter: - (id)purposeIdentifier;	// 0x30713cd5
// converted property setter: - (void)setPurposeIdentifier:(id)identifier;	// 0x30713c91
@end

