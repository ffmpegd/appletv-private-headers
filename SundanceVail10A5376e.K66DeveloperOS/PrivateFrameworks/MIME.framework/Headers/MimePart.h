/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class MFPartialNetworkData, NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder;

@interface MimePart : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_subtype;	// 8 = 0x8
	NSMutableDictionary *_bodyParameters;	// 12 = 0xc
	NSString *_contentTransferEncoding;	// 16 = 0x10
	NSMutableDictionary *_otherIvars;	// 20 = 0x14
	NSRange _range;	// 24 = 0x18
	MFWeakReferenceHolder *_parent;	// 32 = 0x20
	MFWeakReferenceHolder *_body;	// 36 = 0x24
	MimePart *_nextPart;	// 40 = 0x28
	MFPartialNetworkData *_partialData;	// 44 = 0x2c
	NSData *_fullData;	// 48 = 0x30
	MFWeakReferenceHolder *_decodedData;	// 52 = 0x34
}
@property(retain) id contentDescription;	// G=0x369a14e9; S=0x369a1515; converted property
@property(retain) id contentID;	// G=0x369a1539; S=0x369a1565; converted property
@property(retain) id contentLocation;	// G=0x369a1589; S=0x369a15b5; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x369a12d5; S=0x369a12e5; converted property
@property(retain) id disposition;	// G=0x369a1301; S=0x369a132d; converted property
@property(assign) BOOL isGenerated;	// G=0x369a5da1; S=0x369a5dd1; converted property
@property(retain) id languages;	// G=0x369a15d9; S=0x369a1605; converted property
@property(retain) id mimeBody;	// G=0x369a1d51; S=0x369a1e0d; converted property
@property(assign) NSRange range;	// G=0x369a1ba9; S=0x369a1bc1; converted property
@property(retain) id subparts;	// G=0x369a1741; S=0x369a1851; converted property
@property(retain) NSString *subtype;	// G=0x369a1145; S=0x369a11d9; converted property
@property(retain) NSString *type;	// G=0x369a1105; S=0x369a1129; converted property
+ (Class)attachmentClass;	// 0x369a5031
+ (void)initialize;	// 0x369a0945
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x369a504d
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x369a41f5
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x369a3ff1
- (id)init;	// 0x369a10bd
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x369a8879
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x369a489d
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x369a833d
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x369a4791
- (id)_partThatIsAttachment;	// 0x369a2cc5
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x369a37e5
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x369a37c5
- (BOOL)_shouldContinueDecodingProcess;	// 0x369a502d
- (void)addSubpart:(id)subpart;	// 0x369a1a69
- (id)alternativeAtIndex:(int)index;	// 0x369a3d09
- (unsigned)approximateRawSize;	// 0x369a2b6d
- (id)attachmentFilename;	// 0x369a2645
- (id)attachments;	// 0x369a5be9
- (id)bodyData;	// 0x369a9045
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x369a4fe9
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x369a9011
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x369a4fb5
- (id)bodyParameterForKey:(id)key;	// 0x369a11f5
- (id)bodyParameterKeys;	// 0x369a1295
- (id)chosenAlternativePart;	// 0x369a5c49
- (void)clearCachedDescryptedMessageBody;	// 0x369a42c9
- (void)configureFileWrapper:(id)wrapper;	// 0x369a4439
// converted property getter: - (id)contentDescription;	// 0x369a14e9
// converted property getter: - (id)contentID;	// 0x369a1539
// converted property getter: - (id)contentLocation;	// 0x369a1589
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x369a586d
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x369a58a1
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x369a50d9
// converted property getter: - (id)contentTransferEncoding;	// 0x369a12d5
- (id)contentsForTextSystem;	// 0x369a8ffd
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x369a8fd9
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x369a8fb5
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x369a8f91
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x369a8f65
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x369a8ee1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x369a4f6d
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x369a4f91
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x369a4f29
- (void)dealloc;	// 0x369a0f61
- (id)decodeApplicationOctet_stream;	// 0x369b3d69
- (id)decodeApplicationZip;	// 0x369b3d65
- (void)decodeIfNecessary;	// 0x369a9059
- (id)decodeMultipart;	// 0x369b3dbd
- (id)decodeMultipartAlternative;	// 0x369b3d95
- (id)decodeMultipartRelated;	// 0x369b3d6d
- (id)decodeText;	// 0x369a8859
- (id)decodedDataForData:(id)data;	// 0x369a1bd5
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x369a4219
- (id)description;	// 0x369a1e65
// converted property getter: - (id)disposition;	// 0x369a1301
- (id)dispositionParameterForKey:(id)key;	// 0x369a1365
- (id)dispositionParameterKeys;	// 0x369a14a9
- (void)download;	// 0x369a4605
- (id)fileWrapper;	// 0x369a4779
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x369a4351
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x369a4631
- (id)firstChildPart;	// 0x369a1661
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x369a58f5
- (BOOL)hasContents;	// 0x369a8f19
- (BOOL)isAttachment;	// 0x369a2f45
// converted property getter: - (BOOL)isGenerated;	// 0x369a5da1
- (BOOL)isHTML;	// 0x369a325d
- (BOOL)isReadableText;	// 0x369a2c11
- (BOOL)isRich;	// 0x369a3111
// converted property getter: - (id)languages;	// 0x369a15d9
// converted property getter: - (id)mimeBody;	// 0x369a1d51
- (id)nextSiblingPart;	// 0x369a16bd
- (int)numberOfAlternatives;	// 0x369a3ba9
- (unsigned)numberOfAttachments;	// 0x369a58cd
- (id)parentPart;	// 0x369a1629
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x369a7951
- (BOOL)parseMimeBody;	// 0x369a6245
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)necessary;	// 0x369a625d
- (id)partNumber;	// 0x369a813d
- (id)preservedHeaderValueForKey:(id)key;	// 0x369a12b5
// converted property getter: - (NSRange)range;	// 0x369a1ba9
- (id)rfc822DecodedMessageBody;	// 0x369a379d
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x369a1231
// converted property setter: - (void)setContentDescription:(id)description;	// 0x369a1515
// converted property setter: - (void)setContentID:(id)anId;	// 0x369a1565
// converted property setter: - (void)setContentLocation:(id)location;	// 0x369a15b5
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x369a12e5
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x369a132d
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x369a1421
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x369a5dd1
// converted property setter: - (void)setLanguages:(id)languages;	// 0x369a1605
// converted property setter: - (void)setMimeBody:(id)body;	// 0x369a1e0d
// converted property setter: - (void)setRange:(NSRange)range;	// 0x369a1bc1
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x369a1851
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x369a11d9
// converted property setter: - (void)setType:(id)type;	// 0x369a1129
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x369a2e0d
- (id)signedData;	// 0x369a3ed5
- (id)startPart;	// 0x369a3a49
- (id)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x369a478d
- (id)subpartAtIndex:(int)index;	// 0x369a1805
// converted property getter: - (id)subparts;	// 0x369a1741
// converted property getter: - (id)subtype;	// 0x369a1145
- (unsigned long)textEncoding;	// 0x369a294d
- (id)textHtmlPart;	// 0x369a3f2d
- (unsigned)totalTextSize;	// 0x369a38c9
// converted property getter: - (id)type;	// 0x369a1105
- (BOOL)usesKnownSignatureProtocol;	// 0x369a33e1
@end
