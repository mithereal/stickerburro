const path = require('path');
const outputDir = path.join(__dirname, "./public/");
var BrotliGzipPlugin = require('brotli-gzip-webpack-plugin');
const isProd = process.env.NODE_ENV === 'production';

module: {
    loaders: [{
        test: /.jsx?$/,
        loader: 'babel-loader',
        exclude: /node_modules/
    }, {
        test: /\.css$/,
        loader: "style-loader!css-loader"
    }, {
        test: /\.(jpe?g|png|gif|woff|woff2|eot|ttf|svg)(\?[a-z0-9=.]+)?$/,
        loader: 'url-loader?limit=100000' }]
};

module.exports = {
    entry: './src/index.bs.js',
    mode: isProd ? 'production' : 'development',
    output: {
        path: outputDir,
        publicPath: outputDir,
        filename: 'index.js',
    },
    plugins: [
        new BrotliGzipPlugin({
            asset: '[path].br[query]',
            algorithm: 'brotli',
            test: /\.(js|css|html|svg)$/,
            threshold: 10240,
            minRatio: 0.8
            quality: 11
        }),
        new BrotliGzipPlugin({
            asset: '[path].gz[query]',
            algorithm: 'gzip',
            test: /\.(js|css|html|svg)$/,
            threshold: 10240,
            minRatio: 0.8
        })
    ]
};
