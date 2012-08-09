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
@property(retain) id contentDescription;	// G=0x373d0531; S=0x373d055d; converted property
@property(retain) id contentID;	// G=0x373d0581; S=0x373d05ad; converted property
@property(retain) id contentLocation;	// G=0x373d05d1; S=0x373d05fd; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x373d031d; S=0x373d032d; converted property
@property(retain) id disposition;	// G=0x373d0349; S=0x373d0375; converted property
@property(assign) BOOL isGenerated;	// G=0x373d4de9; S=0x373d4e19; converted property
@property(retain) id languages;	// G=0x373d0621; S=0x373d064d; converted property
@property(retain) id mimeBody;	// G=0x373d0d99; S=0x373d0e55; converted property
@property(assign) NSRange range;	// G=0x373d0bf1; S=0x373d0c09; converted property
@property(retain) id subparts;	// G=0x373d0789; S=0x373d0899; converted property
@property(retain) NSString *subtype;	// G=0x373d018d; S=0x373d0221; converted property
@property(retain) NSString *type;	// G=0x373d014d; S=0x373d0171; converted property
+ (Class)attachmentClass;	// 0x373d4079
+ (void)initialize;	// 0x373cf98d
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x373d4095
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x373d323d
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x373d3039
- (id)init;	// 0x373d0105
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x373d78c1
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x373d38e5
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x373d7385
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x373d37d9
- (id)_partThatIsAttachment;	// 0x373d1d0d
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x373d282d
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x373d280d
- (BOOL)_shouldContinueDecodingProcess;	// 0x373d4075
- (void)addSubpart:(id)subpart;	// 0x373d0ab1
- (id)alternativeAtIndex:(int)index;	// 0x373d2d51
- (unsigned)approximateRawSize;	// 0x373d1bb5
- (id)attachmentFilename;	// 0x373d168d
- (id)attachments;	// 0x373d4c31
- (id)bodyData;	// 0x373d808d
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x373d4031
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x373d8059
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x373d3ffd
- (id)bodyParameterForKey:(id)key;	// 0x373d023d
- (id)bodyParameterKeys;	// 0x373d02dd
- (id)chosenAlternativePart;	// 0x373d4c91
- (void)clearCachedDescryptedMessageBody;	// 0x373d3311
- (void)configureFileWrapper:(id)wrapper;	// 0x373d3481
// converted property getter: - (id)contentDescription;	// 0x373d0531
// converted property getter: - (id)contentID;	// 0x373d0581
// converted property getter: - (id)contentLocation;	// 0x373d05d1
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x373d48b5
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x373d48e9
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x373d4121
// converted property getter: - (id)contentTransferEncoding;	// 0x373d031d
- (id)contentsForTextSystem;	// 0x373d8045
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x373d8021
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x373d7ffd
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x373d7fd9
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x373d7fad
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x373d7f29
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x373d3fb5
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x373d3fd9
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x373d3f71
- (void)dealloc;	// 0x373cffa9
- (id)decodeApplicationOctet_stream;	// 0x373e2db1
- (id)decodeApplicationZip;	// 0x373e2dad
- (void)decodeIfNecessary;	// 0x373d80a1
- (id)decodeMultipart;	// 0x373e2e05
- (id)decodeMultipartAlternative;	// 0x373e2ddd
- (id)decodeMultipartRelated;	// 0x373e2db5
- (id)decodeText;	// 0x373d78a1
- (id)decodedDataForData:(id)data;	// 0x373d0c1d
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x373d3261
- (id)description;	// 0x373d0ead
// converted property getter: - (id)disposition;	// 0x373d0349
- (id)dispositionParameterForKey:(id)key;	// 0x373d03ad
- (id)dispositionParameterKeys;	// 0x373d04f1
- (void)download;	// 0x373d364d
- (id)fileWrapper;	// 0x373d37c1
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x373d3399
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x373d3679
- (id)firstChildPart;	// 0x373d06a9
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x373d493d
- (BOOL)hasContents;	// 0x373d7f61
- (BOOL)isAttachment;	// 0x373d1f8d
// converted property getter: - (BOOL)isGenerated;	// 0x373d4de9
- (BOOL)isHTML;	// 0x373d22a5
- (BOOL)isReadableText;	// 0x373d1c59
- (BOOL)isRich;	// 0x373d2159
// converted property getter: - (id)languages;	// 0x373d0621
// converted property getter: - (id)mimeBody;	// 0x373d0d99
- (id)nextSiblingPart;	// 0x373d0705
- (int)numberOfAlternatives;	// 0x373d2bf1
- (unsigned)numberOfAttachments;	// 0x373d4915
- (id)parentPart;	// 0x373d0671
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x373d6999
- (BOOL)parseMimeBody;	// 0x373d528d
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)necessary;	// 0x373d52a5
- (id)partNumber;	// 0x373d7185
- (id)preservedHeaderValueForKey:(id)key;	// 0x373d02fd
// converted property getter: - (NSRange)range;	// 0x373d0bf1
- (id)rfc822DecodedMessageBody;	// 0x373d27e5
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x373d0279
// converted property setter: - (void)setContentDescription:(id)description;	// 0x373d055d
// converted property setter: - (void)setContentID:(id)anId;	// 0x373d05ad
// converted property setter: - (void)setContentLocation:(id)location;	// 0x373d05fd
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x373d032d
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x373d0375
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x373d0469
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x373d4e19
// converted property setter: - (void)setLanguages:(id)languages;	// 0x373d064d
// converted property setter: - (void)setMimeBody:(id)body;	// 0x373d0e55
// converted property setter: - (void)setRange:(NSRange)range;	// 0x373d0c09
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x373d0899
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x373d0221
// converted property setter: - (void)setType:(id)type;	// 0x373d0171
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x373d1e55
- (id)signedData;	// 0x373d2f1d
- (id)startPart;	// 0x373d2a91
- (id)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x373d37d5
- (id)subpartAtIndex:(int)index;	// 0x373d084d
// converted property getter: - (id)subparts;	// 0x373d0789
// converted property getter: - (id)subtype;	// 0x373d018d
- (unsigned long)textEncoding;	// 0x373d1995
- (id)textHtmlPart;	// 0x373d2f75
- (unsigned)totalTextSize;	// 0x373d2911
// converted property getter: - (id)type;	// 0x373d014d
- (BOOL)usesKnownSignatureProtocol;	// 0x373d2429
@end
