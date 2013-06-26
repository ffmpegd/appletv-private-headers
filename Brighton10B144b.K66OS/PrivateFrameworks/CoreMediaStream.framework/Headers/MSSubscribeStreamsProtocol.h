/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"


@interface MSSubscribeStreamsProtocol : MSStreamsProtocol {
	MSSSPCContext _context;	// 12 = 0xc
	int _chunkIndex;	// 120 = 0x78
	MSSSPCChunkParsingContext *_parseContext;	// 124 = 0x7c
}
@property(assign) id delegate;	// G=0x33758ff5; S=0x33759021; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3375904d
- (id)_assetCollectionsFromCoreArray:(id)coreArray personID:(id)anId outError:(id *)error;	// 0x3375add9
- (id)_assetFromCoreDictionary:(id)coreDictionary personID:(id)anId outError:(id *)error;	// 0x33759fe9
- (void)_chunkDidBeginStreamForPersonID:(id)_chunk wasReset:(BOOL)reset metadata:(id)metadata;	// 0x33759a0d
- (void)_chunkDidEndStreamForPersonID:(id)_chunk ctag:(id)ctag;	// 0x33759c45
- (void)_chunkDidFindShareState:(id)_chunk;	// 0x33759e65
- (void)_chunkDidFindSubscriptionGoneForPersonID:(id)_chunk;	// 0x33759d05
- (void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)_chunk;	// 0x33759db5
- (void)_chunkDidParseAssetCollections:(id)_chunk forPersonID:(id)personID;	// 0x33759ad1
- (void)_coreProtocolDidFailAuthentication:(id)_coreProtocol;	// 0x33759529
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x337593c5
- (void)_coreProtocolDidGetDataChunk:(id)_coreProtocol;	// 0x33759469
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x33759fd5
- (id)_invalidFieldErrorWithFieldName:(id)fieldName suggestion:(id)suggestion;	// 0x33759f15
- (void)_parseChunks;	// 0x337595f5
- (void)_parseNextChunk;	// 0x33759775
- (id)_pathToChunkIndex:(int)chunkIndex;	// 0x337591d1
- (void)abort;	// 0x3375b2a1
- (void)dealloc;	// 0x33759175
// converted property getter: - (id)delegate;	// 0x33758ff5
- (void)pollForSubscriptionUpdatesWithAccountAnchors:(id)accountAnchors;	// 0x3375926d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33759021
@end
