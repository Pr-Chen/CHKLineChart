// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CHKLineChartKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// 简单走势图生成器
SWIFT_CLASS("_TtC15CHKLineChartKit21CHChartImageGenerator")
@interface CHChartImageGenerator : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CHKLineChartView;
@class CHChartItem;
@class CHSection;
@class UILabel;
@class UIView;
@class NSAttributedString;
@class CHSeries;

/// K线数据源代理
SWIFT_PROTOCOL("_TtP15CHKLineChartKit20CHKLineChartDelegate_")
@protocol CHKLineChartDelegate
/// 数据源总数
/// \param chart 
///
///
/// returns:
///
- (NSInteger)numberOfPointsInKLineChartWithChart:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
/// 数据源索引为对应的对象
/// \param chart 
///
/// \param index 索引位
///
///
/// returns:
/// K线数据对象
- (CHChartItem * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart valueForPointAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// 获取图表Y轴的显示的内容
/// \param chart 
///
/// \param value 计算得出的y值
///
///
/// returns:
///
- (NSString * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart labelOnYAxisForValue:(CGFloat)value atIndex:(NSInteger)index section:(CHSection * _Nonnull)section SWIFT_WARN_UNUSED_RESULT;
@optional
/// 获取图表X轴的显示的内容
/// \param chart 
///
/// \param index 索引位
///
///
/// returns:
///
- (NSString * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart labelOnXAxisForIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// 完成绘画图表
- (void)didFinishKLineChartRefreshWithChart:(CHKLineChartView * _Nonnull)chart;
/// 配置各个分区小数位保留数
/// \param chart 
///
/// \param decimalForSection 分区
///
///
/// returns:
///
- (NSInteger)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart decimalAt:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// 设置y轴标签的宽度
/// \param chart 
///
///
/// returns:
///
- (CGFloat)widthForYAxisLabelInKLineChartIn:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
/// 点击图表列响应方法
/// \param chart 图表
///
/// \param index 点击的位置
///
/// \param item 数据对象
///
- (void)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart didSelectAt:(NSInteger)index item:(CHChartItem * _Nonnull)item;
/// X轴的布局高度
/// \param chart 图表
///
///
/// returns:
/// 返回自定义的高度
- (CGFloat)heightForXAxisInKLineChartIn:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
/// 初始化时的显示范围长度
/// \param chart 图表
///
- (NSInteger)initRangeInKLineChartIn:(CHKLineChartView * _Nonnull)chart SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
/// 自定义选择点时出现的标签样式
/// \param chart 图表
///
/// \param yAxis 可给用户自定义的y轴显示标签
///
/// \param viewOfXAxis 可给用户自定义的x轴显示标签
///
- (void)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart viewOfYAxis:(UILabel * _Nonnull)yAxis viewOfXAxis:(UILabel * _Nonnull)viewOfXAxis;
/// 自定义section的头部View显示内容
/// \param chart 图表
///
/// \param section 分区的索引位
///
///
/// returns:
/// 自定义的View
- (UIView * _Nullable)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// 自定义section的头部View显示内容
/// \param chart 图表
///
/// \param section 分区的索引位
///
///
/// returns:
/// 自定义的View
- (NSAttributedString * _Nullable)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart titleForHeaderInSection:(CHSection * _Nonnull)section index:(NSInteger)index item:(CHChartItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
/// 切换分区用分页方式展示的线组
- (void)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart didFlipPageSeries:(CHSection * _Nonnull)section series:(CHSeries * _Nonnull)series seriesIndex:(NSInteger)seriesIndex;
@end


@interface CHChartImageGenerator (SWIFT_EXTENSION(CHKLineChartKit)) <CHKLineChartDelegate>
- (NSInteger)numberOfPointsInKLineChartWithChart:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
- (CHChartItem * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart valueForPointAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// 调整Y轴标签宽度
/// \param chart 
///
///
/// returns:
///
- (CGFloat)widthForYAxisLabelInKLineChartIn:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart labelOnYAxisForValue:(CGFloat)value atIndex:(NSInteger)index section:(CHSection * _Nonnull)section SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)kLineChartWithChart:(CHKLineChartView * _Nonnull)chart labelOnXAxisForIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)heightForXAxisInKLineChartIn:(CHKLineChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
@end


/// 数据元素
SWIFT_CLASS("_TtC15CHKLineChartKit11CHChartItem")
@interface CHChartItem : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIFont;
@class UIColor;
@protocol CHKDepthChartDelegate;
@class NSCoder;

SWIFT_CLASS("_TtC15CHKLineChartKit16CHDepthChartView")
@interface CHDepthChartView : UIView
@property (nonatomic, strong) UIFont * _Nonnull labelFont;
@property (nonatomic, strong) UIColor * _Nonnull lineColor;
@property (nonatomic, strong) UIColor * _Nonnull textColor;
@property (nonatomic) NSInteger xAxisPerInterval;
/// 代理
@property (nonatomic, weak) IBOutlet id <CHKDepthChartDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)layoutSubviews;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface CHDepthChartView (SWIFT_EXTENSION(CHKLineChartKit)) <UIGestureRecognizerDelegate>
/// 控制手势开关
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end





@class CHKDepthChartItem;

/// 深度图表数据源代理
SWIFT_PROTOCOL("_TtP15CHKLineChartKit21CHKDepthChartDelegate_")
@protocol CHKDepthChartDelegate
/// 数据源总数
/// \param chart 
///
///
/// returns:
///
- (NSInteger)numberOfPointsInDepthChartWithChart:(CHDepthChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
/// 数据源索引为对应的对象
/// \param chart 
///
/// \param index 索引位
///
///
/// returns:
/// K线数据对象
- (CHKDepthChartItem * _Nonnull)depthChartWithChart:(CHDepthChartView * _Nonnull)chart valueForPointAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// 获取图表Y轴的显示的内容
/// \param chart 
///
/// \param value 计算得出的y值
///
///
/// returns:
///
- (NSString * _Nonnull)depthChartWithChart:(CHDepthChartView * _Nonnull)chart labelOnYAxisForValue:(CGFloat)value SWIFT_WARN_UNUSED_RESULT;
@optional
/// y轴的显示的基底值
/// 用户可以自定义y轴的标签什么数值显示，通过配合实现incrementValueForYAxis的方法，
/// 做到更好的用户体验，例如：baseValue = 0，incrementValue = 10，则显示y轴显示为0，10，20，30，40…<max
/// \param depthChart 图表
///
///
/// returns:
/// 开始显示的值
- (double)baseValueForYAxisInDepthChartIn:(CHDepthChartView * _Nonnull)depthChart SWIFT_WARN_UNUSED_RESULT;
/// y轴每段增加的值
/// 例如：baseValue = 0，incrementValue = 10，则显示y轴显示为0，10，20，30，40…<max
/// \param depthChart 图表
///
///
/// returns:
/// 增量
- (double)incrementValueForYAxisInDepthChartIn:(CHDepthChartView * _Nonnull)depthChart SWIFT_WARN_UNUSED_RESULT;
/// 获取图表X轴的显示的内容
/// \param chart 
///
/// \param index 索引位
///
///
/// returns:
///
- (NSString * _Nonnull)depthChartWithChart:(CHDepthChartView * _Nonnull)chart labelOnXAxisForIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// 完成绘画图表
- (void)didFinishDepthChartRefreshWithChart:(CHDepthChartView * _Nonnull)chart;
/// 设置y轴标签的宽度
/// \param chart 
///
///
/// returns:
///
- (CGFloat)widthForYAxisLabelInDepthChartIn:(CHDepthChartView * _Nonnull)depthChart SWIFT_WARN_UNUSED_RESULT;
/// 点击图表列响应方法
/// \param chart 图表
///
/// \param point 点击的位置
///
/// \param item 数据对象
///
- (void)depthChartWithChart:(CHDepthChartView * _Nonnull)chart Selected:(CHKDepthChartItem * _Nonnull)item At:(CGPoint)point;
/// X轴的布局高度
/// \param chart 图表
///
///
/// returns:
/// 返回自定义的高度
- (CGFloat)heightForXAxisInDepthChartIn:(CHDepthChartView * _Nonnull)depthChart SWIFT_WARN_UNUSED_RESULT;
@required
/// 价格的小数位长度
/// \param chart 
///
///
/// returns:
///
- (NSInteger)depthChartOfDecimalWithChart:(CHDepthChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
/// 量的小数位长度
/// \param chart 
///
///
/// returns:
///
- (NSInteger)depthChartOfVolDecimalWithChart:(CHDepthChartView * _Nonnull)chart SWIFT_WARN_UNUSED_RESULT;
@optional
/// 自定义点击显示信息view
/// \param chart 
///
///
/// returns:
///
- (UIView * _Nullable)depthChartShowItemViewWithChart:(CHDepthChartView * _Nonnull)chart Selected:(CHKDepthChartItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
/// 自定义点击选中view
/// \param chart 
///
///
/// returns:
///
- (UIView * _Nullable)depthChartTagViewWithChart:(CHDepthChartView * _Nonnull)chart Selected:(CHKDepthChartItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
@end


/// 深度数据元素
SWIFT_CLASS("_TtC15CHKLineChartKit17CHKDepthChartItem")
@interface CHKDepthChartItem : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC15CHKLineChartKit16CHKLineChartView")
@interface CHKLineChartView : UIView
/// MARK: - 成员变量
@property (nonatomic, strong) UIColor * _Nonnull upColor;
@property (nonatomic, strong) UIColor * _Nonnull downColor;
@property (nonatomic, strong) UIFont * _Nonnull labelFont;
@property (nonatomic, strong) UIColor * _Nonnull lineColor;
@property (nonatomic, strong) UIColor * _Nonnull textColor;
@property (nonatomic) NSInteger xAxisPerInterval;
@property (nonatomic, weak) IBOutlet id <CHKLineChartDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)layoutSubviews;
@end


@interface CHKLineChartView (SWIFT_EXTENSION(CHKLineChartKit)) <UIGestureRecognizerDelegate>
/// 控制手势开关
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end






/// K线的区域
SWIFT_CLASS("_TtC15CHKLineChartKit9CHSection")
@interface CHSection : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






/// 线段组
/// 在图表中一个要显示的“线段”都是以一个CHSeries进行封装。
/// 蜡烛图线段：包含一个蜡烛图点线模型（CHCandleModel）
/// 时分线段：包含一个线点线模型（CHLineModel）
/// 交易量线段：包含一个交易量点线模型（CHColumnModel）
/// MA/EMA线段：包含一个线点线模型（CHLineModel）
/// KDJ线段：包含3个线点线模型（CHLineModel），3个点线的数值根据KDJ指标算法计算所得
/// MACD线段：包含2个线点线模型（CHLineModel），1个条形点线模型
SWIFT_CLASS("_TtC15CHKLineChartKit8CHSeries")
@interface CHSeries : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@protocol CAAction;

SWIFT_CLASS("_TtC15CHKLineChartKit12CHShapeLayer")
@interface CHShapeLayer : CAShapeLayer
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15CHKLineChartKit11CHTextLayer")
@interface CHTextLayer : CATextLayer
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
