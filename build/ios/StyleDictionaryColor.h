
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 12 Sep 2022 09:41:05 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorBaseBlack,
ColorColorBaseWhite,
ColorColorNeutral50,
ColorColorNeutral100,
ColorColorNeutral200,
ColorColorNeutral300,
ColorColorNeutral400,
ColorColorNeutral500,
ColorColorNeutral600,
ColorColorNeutral700,
ColorColorNeutral800,
ColorColorNeutral900,
ColorColorPrimary50,
ColorColorPrimary100,
ColorColorPrimary200,
ColorColorPrimary300,
ColorColorPrimary400,
ColorColorPrimary500,
ColorColorPrimary600,
ColorColorPrimary700,
ColorColorPrimary800,
ColorColorPrimary900,
ColorColorInformative50,
ColorColorInformative100,
ColorColorInformative200,
ColorColorInformative300,
ColorColorInformative400,
ColorColorInformative500,
ColorColorInformative600,
ColorColorInformative700,
ColorColorInformative800,
ColorColorInformative900,
ColorColorSuccess50,
ColorColorSuccess100,
ColorColorSuccess200,
ColorColorSuccess300,
ColorColorSuccess400,
ColorColorSuccess500,
ColorColorSuccess600,
ColorColorSuccess700,
ColorColorSuccess800,
ColorColorSuccess900,
ColorColorWarning50,
ColorColorWarning100,
ColorColorWarning200,
ColorColorWarning300,
ColorColorWarning400,
ColorColorWarning500,
ColorColorWarning600,
ColorColorWarning700,
ColorColorWarning800,
ColorColorWarning900,
ColorColorDanger50,
ColorColorDanger100,
ColorColorDanger200,
ColorColorDanger300,
ColorColorDanger400,
ColorColorDanger500,
ColorColorDanger600,
ColorColorDanger700,
ColorColorDanger800,
ColorColorDanger900,
ColorColorsSemiRed,
ColorColorsMultipleFills0,
ColorColorsMultipleFills1,
ColorColorsSingleBlue,
ColorColorsRefBlue,
ColorColorsEmpty,
ColorColorsSpecialCharacters,
ColorColorsSpecialCharactersNderung
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
