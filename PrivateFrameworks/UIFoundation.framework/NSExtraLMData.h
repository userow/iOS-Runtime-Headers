/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSLayoutManagerTextBlockRowArrayCache, NSMutableArray, NSRunStorage, NSTextContainer;

@interface NSExtraLMData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSGlyphTree { 
        struct _NSGlyphNode {} *rootNode; 
        struct _NSGlyphNode {} *curNode; 
        unsigned int curCharIndex; 
        unsigned int curGlyphIndex; 
    struct _NSLayoutTree { 
        struct _NSLayoutNode {} *rootNode; 
        struct _NSLayoutNode {} *curNode; 
        unsigned int curGlyphIndex; 
        float curLongitudinalOrigin; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } extraLineFragmentRect; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } extraLineFragmentUsedRect; 
        unsigned int glyphsPerLineEstimate; 
        float offsetPerLineEstimate; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGSize { 
        float width; 
        float height; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct __lmFlags2 { 
        unsigned int glyphCause : 6; 
        unsigned int layoutCause : 6; 
        unsigned int delegateRespondsToTempAttrs : 1; 
        unsigned int processingFirstTextViewVisible : 1; 
        unsigned int temporarySpacingChange : 1; 
        unsigned int alwaysDrawsActive : 1; 
        unsigned int usesOldShowPackedGlyphs : 1; 
        unsigned int drawsUnderlinesLikeWebKit : 1; 
        unsigned int reserved : 14; 
    NSRunStorage *_attachmentSizesRun;
    NSMutableArray *_blockRunsArray;
    } _cachedFontBounds;
    float _cachedUnderlineAdjustment;
    float _cachedUnderlinePosition;
    } _cachedUnderlineRange;
    float _cachedUnderlineThickness;
    unsigned int _currentAttachmentIndex;
    } _currentAttachmentRect;
    id _fillHoleLock;
    NSTextContainer *_firstTextContainer;
    } _firstTextViewVisibleCharRange;
    } _firstTextViewVisibleOffset;
    NSRunStorage *_fragmentRunsExtras;
    } _glyphTree;
    float _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    } _lastInvalidatedCharRange;
    float _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    } _layoutTree;
    } _lmFlags2;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    id _temporaryAttributes;
    struct __CFDictionary { } *_textContainerGlyphIndexes;
    struct __CFDictionary { } *_textContainerIndexes;
    int _typesetterBehavior;
}

@end