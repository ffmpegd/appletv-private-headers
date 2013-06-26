/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSURLResponse, NSURLRequest;

@interface AVAssetResourceLoadingRequest : NSObject {
	AVAssetResourceLoadingRequestInternal *_loadingRequest;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// G=0x2c3217c1; 
@property(readonly, assign, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;	// G=0x2c32183d; 
@property(readonly, assign, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;	// G=0x2c3218b5; 
@property(readonly, assign, nonatomic, getter=isFinished) BOOL finished;	// G=0x2c321759; 
@property(copy, nonatomic) NSURLRequest *redirect;	// G=0x2c321d9d; S=0x2c32194d; 
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x2c321739; 
@property(copy, nonatomic) NSURLResponse *response;	// G=0x2c32192d; S=0x2c3218d5; 
- (id)initWithResourceLoader:(id)resourceLoader requestDictionary:(id)dictionary;	// 0x2c321015
- (void)_addFigPlaybackItemListeners;	// 0x2c322c61
- (void)_appendToCachedData:(id)cachedData;	// 0x2c321b5d
- (id)_getAndClearCachedData;	// 0x2c3219a5
- (void)_removeFigPlaybackItemListeners;	// 0x2c322e4d
- (id)_requestDictionary;	// 0x2c321719
- (id)_resourceLoader;	// 0x2c3216ed
- (void)_sendDataIncrementally:(id)incrementally data:(id)data;	// 0x2c3223e1
- (void)_sendDictionaryForURLRequest:(id)urlrequest context:(id)context;	// 0x2c321fc1
- (void)_setContentInformationRequest:(id)request;	// 0x2c3217e5
- (void)_setDataRequest:(id)request;	// 0x2c32185d
- (BOOL)_tryToMarkAsCancelled;	// 0x2c321795
- (id)_weakReference;	// 0x2c3216cd
// declared property getter: - (id)contentInformationRequest;	// 0x2c32183d
// declared property getter: - (id)dataRequest;	// 0x2c3218b5
- (void)dealloc;	// 0x2c3213e5
- (id)description;	// 0x2c3215fd
- (void)finalize;	// 0x2c321571
- (void)finishLoading;	// 0x2c322441
- (void)finishLoadingWithError:(id)error;	// 0x2c32274d
- (void)finishLoadingWithResponse:(id)response data:(id)data redirect:(id)redirect;	// 0x2c322989
- (BOOL)finished;	// 0x2c32177d
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)app contentIdentifier:(id)identifier options:(id)options completionHandler:(id)handler;	// 0x2c322af5
// declared property getter: - (BOOL)isCancelled;	// 0x2c3217c1
// declared property getter: - (BOOL)isFinished;	// 0x2c321759
// declared property getter: - (id)redirect;	// 0x2c321d9d
// declared property getter: - (id)request;	// 0x2c321739
// declared property getter: - (id)response;	// 0x2c32192d
- (id)serializableRepresentation;	// 0x2c321dbd
// declared property setter: - (void)setRedirect:(id)redirect;	// 0x2c32194d
// declared property setter: - (void)setResponse:(id)response;	// 0x2c3218d5
- (id)streamingContentKeyRequestDataForApp:(id)app contentIdentifier:(id)identifier options:(id)options error:(id *)error;	// 0x2c3229e1
@end
