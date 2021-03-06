/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSCopyObject.h"
#import "ATVJSConfigurable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVBindingAdaptor, NSArray, NSString;

@interface XXUnknownSuperclass (iTunesAdditions)
+ (id)stringWithUStr255:(unsigned short [256])ustr255;	// 0xbff9
- (int)iTunesCompare:(id)compare;	// 0xc019
@end

@interface XXUnknownSuperclass (ATVValueTransformerAdditions)
+ (id)dateToMonthDayYearString;	// 0x131579
+ (id)releaseDateAsInTheatersDateString;	// 0x131341
+ (id)releaseDateAsOriginalAirDateString;	// 0x131385
+ (id)releaseDateAsReleasedDateString;	// 0x1312b1
+ (id)releaseDateAsYearReleasedString;	// 0x131221
+ (id)tomatoMeter;	// 0x1316dd
+ (id)tvEpisodeTitleToNumberedTitle;	// 0x13164d
+ (id)userRatingAndNumReviewsToControl;	// 0x1314e9
+ (id)userRatingToImageControl;	// 0x1313c9
+ (id)userReviewsNumberToTextControl;	// 0x131459
+ (id)versionStringToVersionComponentsArray;	// 0x131609
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16eca5
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16ed71
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16edcd
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16ee29
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16ee89
@end

@interface XXUnknownSuperclass (JSAdditions) <ATVJSCopyObject, ATVJSConfigurable>
+ (void)setupForJavaScript:(OpaqueJSContext *)javaScript object:(OpaqueJSValue *)object;	// 0x1766b9
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x176925
@end

@interface XXUnknownSuperclass (FeedAdditions)
- (id)_lookupFeedValueForKey:(id)key expectedClass:(Class)aClass;	// 0x195275
- (id)arrayForFeedKey:(id)feedKey;	// 0x195505
- (BOOL)boolForFeedKey:(id)feedKey defaultValue:(BOOL)value;	// 0x1953fd
- (id)dataForFeedKey:(id)feedKey;	// 0x195569
- (id)dateForFeedKey:(id)feedKey;	// 0x19543d
- (id)dictionaryForFeedKey:(id)feedKey;	// 0x1954a1
- (id)numberForFeedKey:(id)feedKey;	// 0x195335
- (id)stringForFeedKey:(id)feedKey;	// 0x195399
@end

@interface XXUnknownSuperclass (ATVAudio)
@property(readonly, assign, nonatomic) BOOL atvIsAC3;	// G=0x217fb1; 
// declared property getter: - (BOOL)atvIsAC3;	// 0x217fb1
@end

@interface XXUnknownSuperclass (AVMediaSelectionGroup_ATVAdditions)
- (id)_firstOptionMatchingLocale:(id)locale;	// 0x21c3fd
@end

@interface XXUnknownSuperclass (AVAssetTrack_ATVAdditions)
- (id)_locale;	// 0x21c471
@end

@interface XXUnknownSuperclass (ATVSubtitles)
@property(readonly, assign, nonatomic) BOOL atvIsSDH;	// G=0x22377d; 
// declared property getter: - (BOOL)atvIsSDH;	// 0x22377d
@end

@interface XXUnknownSuperclass (ATVBindingAdaptorAccess)
@property(readonly, assign) ATVBindingAdaptor *bindingAdaptor;	// G=0x2619b5; 
- (id)_bindingAdaptor;	// 0x2619a5
// declared property getter: - (id)bindingAdaptor;	// 0x2619b5
- (void)releaseBindingAdaptor;	// 0x261a2d
@end

@interface XXUnknownSuperclass (ATVBindingUtilities)
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x261ba5
- (id)infoForBinding:(id)binding;	// 0x261d39
- (void)unbind:(id)unbind;	// 0x261cad
- (void)updateBoundValueForBinding:(id)binding;	// 0x261a75
@end

@interface XXUnknownSuperclass (ATVAutounbinderAccess)
- (id)_autounbinder;	// 0x261dc5
- (void)_setAutounbinder:(id)autounbinder;	// 0x261dd5
@end

@interface XXUnknownSuperclass (RUIYTAdditions)
+ (id)ytErrorWithCode:(int)code localizedDescription:(id)description;	// 0x268d0d
@end

@interface XXUnknownSuperclass (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x27fbf5
@end

@interface XXUnknownSuperclass (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x28718d; 
@property(assign, nonatomic) BOOL accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// G=0x2871bd; S=0x2871e9; @dynamic
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x2871b5; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x2871b1; 
@property(readonly, assign, nonatomic) NSString *accessibilityRangeString;	// G=0x2871b9; 
// declared property getter: - (id)accessibilityControls;	// 0x28718d
- (float)accessibilityDelayForScreenContent;	// 0x28717d
- (BOOL)accessibilityElementIsHidden;	// 0x287185
- (id)accessibilityNonFocusableElements;	// 0x287179
// declared property getter: - (BOOL)accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// 0x2871bd
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x2871b5
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x2871b1
// declared property getter: - (id)accessibilityRangeString;	// 0x2871b9
- (id)accessibilityScreenContent;	// 0x2871ad
- (id)accessibilitySecondaryLabel;	// 0x2871a9
- (id)accessibilityTraitsList;	// 0x287189
// declared property setter: - (void)setAccessibilityOutputsLanguageNameIfCannotSpeakLanguage:(BOOL)language;	// 0x2871e9
@end

@interface XXUnknownSuperclass (AXPriv)
- (id)accessibilityLabel;	// 0x287225
@end

@interface XXUnknownSuperclass (NSIndexPathExtensions)
+ (id)indexPathForColumn:(unsigned)column inSection:(unsigned)section;	// 0x2b68b9
- (unsigned)column;	// 0x2b6905
@end

@interface XXUnknownSuperclass (PhotoBatchIndexPath)
+ (id)indexPathForPhoto:(unsigned)photo inBatch:(unsigned)batch;	// 0x2b6919
- (unsigned)batch;	// 0x2b6965
- (unsigned)photo;	// 0x2b699d
@end

@interface XXUnknownSuperclass (GridIndexPath)
+ (id)indexPathForIndex:(unsigned)index;	// 0x2b69d5
- (unsigned)index;	// 0x2b69f1
@end

@interface XXUnknownSuperclass (BRMetadataLinesLayer)
- (BOOL)isEmpty;	// 0x2ef355
@end

@interface XXUnknownSuperclass (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x351dd9; S=0x351d25; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x351dd9
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x351d25
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x35830d
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x358369
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x3583c5
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (id)providerRanges;	// 0x3583e5
@end

@interface XXUnknownSuperclass (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x362e7d
@end

@interface XXUnknownSuperclass (FeatureManagerAdditions)
- (BOOL)isApplianceBundleIdentifier;	// 0x36a6f1
@end

@interface XXUnknownSuperclass (BRBundleAdditions)
- (id)pathForImage:(id)image ofType:(id)type;	// 0x38c0e9
- (id)pathForImage:(id)image ofType:(id)type inDirectory:(id)directory;	// 0x38c10d
- (id)urlForImage:(id)image ofType:(id)type;	// 0x38c1b5
@end

@interface XXUnknownSuperclass (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x38c645
@end

@interface XXUnknownSuperclass (FirstRest)
- (id)first;	// 0x38c80d
- (id)firstObject;	// 0x38c7d5
- (id)head;	// 0x38c871
- (id)rest;	// 0x38c81d
- (id)tail;	// 0x38c881
@end

@interface XXUnknownSuperclass (Map)
- (id)map:(id)map;	// 0x38c891
@end

@interface XXUnknownSuperclass (Filter)
- (id)objectsPassingTest:(id)test;	// 0x38c9c9
@end

@interface XXUnknownSuperclass (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x38c9f9
@end

@interface XXUnknownSuperclass (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x38ca79
@end

@interface XXUnknownSuperclass (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x38cb11
+ (id)shuffleArray:(id)array;	// 0x38cad9
@end

@interface XXUnknownSuperclass (DebuggingAndLogging)
- (id)pointerDescription;	// 0x38cc75
@end

@interface XXUnknownSuperclass (BRMutableArrayAdditions)
- (void)addObjectIfNotNil:(id)aNil;	// 0x38cd89
- (void)shuffle;	// 0x38cda1
@end

@interface XXUnknownSuperclass (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x390add
- (id)firstLayerNamed:(id)named;	// 0x390a5d
@end

@interface XXUnknownSuperclass (BRDataUtilities)
- (id)AES256DecryptWithKey:(id)key;	// 0x39147d
- (id)AES256EncryptWithKey:(id)key;	// 0x391391
@end

@interface XXUnknownSuperclass (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x391569
- (id)dateCeiledToNearestMinutes:(int)nearestMinutes;	// 0x391909
- (id)dateFlooredToNearestMinutes:(int)nearestMinutes;	// 0x391809
- (BOOL)isToday;	// 0x3916a1
- (BOOL)isTomorrow;	// 0x391791
- (BOOL)isYesterday;	// 0x391719
@end

@interface XXUnknownSuperclass (BRDateDisplay)
- (id)expiryDescription;	// 0x391fc9
- (id)stringForDisplayingMonthDayYear;	// 0x391c79
- (id)stringForDisplayingTime12H;	// 0x391d25
- (id)stringForGeneralDisplay;	// 0x391a31
- (id)stringForMonthDayFormat;	// 0x391de5
- (id)stringForReleaseDateDisplay;	// 0x391bd5
- (id)stringFromDateForTVShows;	// 0x391a21
@end

@interface XXUnknownSuperclass (ISO8601)
- (id)stringForISO8601CombinedDateAndTime;	// 0x3921c9
@end

@interface XXUnknownSuperclass (SpecialFormatters)
+ (id)asctimeDateFormatter;	// 0x392425
+ (id)iso8601CombinedDateAndTimeFormatter;	// 0x392201
+ (id)rfc1123DateFormatter;	// 0x392285
+ (id)rfc850DateFormatter;	// 0x392355
@end

@interface XXUnknownSuperclass (BRDictionaryAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x39315d
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary;	// 0x392e0d
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary cachePolicy:(unsigned)policy;	// 0x392e31
- (id)URLQueryString;	// 0x3932e1
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x3932f5
- (void)__purgeCachedLocalizedData:(id)data;	// 0x393105
- (id)deepCopy;	// 0x3932b1
- (id)deepMutableCopy;	// 0x3932c9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x393251
@end

@interface XXUnknownSuperclass (BRMutableDictionaryAdditions)
- (void)setObjectIfNotNil:(id)aNil forKey:(id)key;	// 0x393511
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x39352d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x39353d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x393559
@end

@interface XXUnknownSuperclass (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x394b7d
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x394d21
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x394d4d
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x394e5d
@end

@interface XXUnknownSuperclass (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x3a4c69
@end

@interface XXUnknownSuperclass (ATVKeyValueCodingAdditions)
- (id)arrayValueForKey:(id)key;	// 0x3a51c1
@end

@interface XXUnknownSuperclass (BRStringUtilities)
+ (id)hexStringWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3a8479
+ (id)stringWithNumber:(id)number;	// 0x3a90e9
+ (id)timeStringForSeconds:(double)seconds;	// 0x3a84f9
+ (id)timeStringWithLabelForSeconds:(double)seconds;	// 0x3a8619
- (int)customCompare:(id)compare;	// 0x3a86e9
- (id)fileSafeString;	// 0x3a87f1
- (BOOL)hasCaseInsensitivePrefix:(id)prefix;	// 0x3a88a1
- (unsigned long)hexValue;	// 0x3a8779
- (id)md5String;	// 0x3a8fa5
- (id)sshA1String;	// 0x3a9025
- (id)stringByDecodingFriendlyHTMLCodes;	// 0x3a8b75
- (id)stringByRemovingCharactersInSet:(id)set;	// 0x3a8931
- (id)stringByReplacingCharactersInSet:(id)set withString:(id)string;	// 0x3a8a1d
- (id)stringByURLEncoding;	// 0x3a915d
- (id)subStringAfter:(int)after;	// 0x3a88fd
- (id)subStringBefore:(int)before;	// 0x3a88e9
@end

@interface XXUnknownSuperclass (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x3a99b9
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x3a9919
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x3a9935
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x3a9971
- (void)postNotificationOnMainThread:(id)thread;	// 0x3a984d
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x3a987d
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x3a98cd
@end

@interface XXUnknownSuperclass (BRTimerAdditions)
- (void)invalidateWithObject:(id)object;	// 0x3a9fd9
@end

@interface XXUnknownSuperclass (Drawing)
- (void)drawAtPoint:(CGPoint)point context:(CGContextRef)context;	// 0x3aa7e1
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x3aa811
- (void)drawInRect:(CGRect)rect withDim:(float)dim context:(CGContextRef)context;	// 0x3aa885
- (CGSize)typographicBounds;	// 0x3aa93d
- (CGSize)typographicBoundsWithConstraint:(CGSize)constraint;	// 0x3aa975
@end

@interface XXUnknownSuperclass (BRValueTransformerAdditions)
+ (id)movieRatingStringTransformer;	// 0x3abe31
@end

@interface XXUnknownSuperclass (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x3ac439
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x3ac591
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x3ac22d
- (id)_queryParameters;	// 0x3abfb5
- (id)decodedQueryParameters;	// 0x3ac0dd
- (BOOL)isHTTPFamilyURL;	// 0x3abf75
- (BOOL)isHTTPSURL;	// 0x3abf35
- (BOOL)isHTTPURL;	// 0x3abef5
- (id)queryParameters;	// 0x3ac0cd
- (id)valueForParam:(id)param;	// 0x3ac4a9
@end

@interface XXUnknownSuperclass (BRValueAdditions)
+ (id)valueWithCGPoint:(CGPoint)cgpoint;	// 0x3acd95
+ (id)valueWithCGRect:(CGRect)cgrect;	// 0x3acdc5
+ (id)valueWithCGSize:(CGSize)cgsize;	// 0x3ace01
- (CGPoint)cgPointValue;	// 0x3ace31
- (CGRect)cgRectValue;	// 0x3ace65
- (CGSize)cgSizeValue;	// 0x3acea5
@end

@interface XXUnknownSuperclass (MimeDataEncoding)
+ (unsigned)quotedPrintableLengthOfHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x3ae2dd
- (id)decodeBase64;	// 0x3ad681
- (id)decodeModifiedBase64;	// 0x3ae2bd
- (id)decodeQuotedPrintableForText:(BOOL)text;	// 0x3acffd
- (id)encodeBase64;	// 0x3ae2a5
- (id)encodeBase64AllowCancel:(BOOL)cancel;	// 0x3ae2b1
- (id)encodeBase64HeaderData;	// 0x3ae2d1
- (id)encodeBase64WithoutLineBreaks;	// 0x3adc81
- (id)encodeBase64WithoutLineBreaksOrPadding;	// 0x3ae299
- (id)encodeModifiedBase64;	// 0x3ae2c5
- (id)encodeQuotedPrintableForText:(BOOL)text;	// 0x3ad345
- (id)encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;	// 0x3ad359
- (BOOL)isValidBase64Data;	// 0x3adbd1
@end

@interface XXUnknownSuperclass (MimeDataEncoding)
- (void)appendQuotedPrintableDataForHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x3ae409
@end

@interface XXUnknownSuperclass (SimpleQueue)
- (id)pop;	// 0x3b7ea9
@end

@interface XXUnknownSuperclass (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x4a71bd
@end

@interface XXUnknownSuperclass (NSString_SBJsonParsing)
- (id)JSONValue;	// 0x4a7241
@end

@interface XXUnknownSuperclass (URLDecode)
- (id)urlDecodeByReplacingPercentEscapesUsingEncoding;	// 0x4cae41
@end

@interface XXUnknownSuperclass (URLEncode)
- (id)urlEncodeByReplacingPercentEscapesUsingEncoding;	// 0x4e6d69
@end

@interface XXUnknownSuperclass (AOSStringAdditions)
- (id)stringByURLQuoting;	// 0x844555
- (id)stringByURLQuotingWithCharactersToEscape:(id)escape;	// 0x844511
@end

@interface XXUnknownSuperclass (AOSURLAdditions)
@end

